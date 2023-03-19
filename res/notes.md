# Notes
In theory, `qis::signature` could have the following constructor:

```cpp
explicit signature(
  const void* data,
  std::size_t dsize,
  const void* mask = nullptr,
  std::size_t msize = 0) :
  size_(dsize), mask_(msize != 0)
{
  // Verify data and mask.
  if (dsize && !data) {
    QIS_THROW_INVALID_SIGNATURE;
  }
  if (msize && !mask) {
    QIS_THROW_INVALID_SIGNATURE;
  }

  // Allocate memory.
  if (!size_) {
    return;
  }
  data_ = std::make_unique<char[]>(mask_ ? size_ * 2 : size_);

  // Write data.
  auto src = reinterpret_cast<const char*>(data);
  const auto dst = data_.get();
  std::copy(src, src + dsize, dst);

  // Write mask.
  if (!mask_) {
    return;
  }
  src = reinterpret_cast<const char*>(mask);
  std::copy(src, src + std::min(size_, msize), dst + size_);
}
```

The constructor tests would look like this:

```cpp
QIS_TEST("signature(const void*, std::size_t, const void*, std::size_t)")
{
  const char* bin = "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09";

  SUBCASE("data: nullptr, dsize: 0")
  {
    const qis::signature s0(nullptr, 0, nullptr, 0);
    REQUIRE(s0.size() == 0);
    REQUIRE(s0.data() == nullptr);
    REQUIRE(s0.mask() == nullptr);

    REQUIRE_THROWS_AS(qis::signature(nullptr, 0, nullptr, 1), qis::invalid_signature);

    const qis::signature s2(nullptr, 0, bin, 0);
    REQUIRE(s2.size() == 0);
    REQUIRE(s2.data() == nullptr);
    REQUIRE(s2.mask() == nullptr);

    const qis::signature s3(nullptr, 0, bin, 1);
    REQUIRE(s3.size() == 0);
    REQUIRE(s3.data() == nullptr);
    REQUIRE(s3.mask() == nullptr);
  }

  SUBCASE("data: nullptr, dsize: 1")
  {
    REQUIRE_THROWS_AS(qis::signature(nullptr, 1, nullptr, 0), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(nullptr, 1, nullptr, 1), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(nullptr, 1, bin, 0), qis::invalid_signature);
    REQUIRE_THROWS_AS(qis::signature(nullptr, 1, bin, 1), qis::invalid_signature);
  }

  SUBCASE("data: (valid), dsize: 0")
  {
    const qis::signature s0(bin, 0, nullptr, 0);
    REQUIRE(s0.size() == 0);
    REQUIRE(s0.data() == nullptr);
    REQUIRE(s0.mask() == nullptr);

    REQUIRE_THROWS_AS(qis::signature(bin, 0, nullptr, 1), qis::invalid_signature);

    const qis::signature s2(bin, 0, bin, 0);
    REQUIRE(s2.size() == 0);
    REQUIRE(s2.data() == nullptr);
    REQUIRE(s2.mask() == nullptr);

    const qis::signature s3(bin, 0, bin, 1);
    REQUIRE(s3.size() == 0);
    REQUIRE(s3.data() == nullptr);
    REQUIRE(s3.mask() == nullptr);
  }

  SUBCASE("data: (valid), dsize: 1")
  {
    const qis::signature s0(bin, 1, nullptr, 0);
    REQUIRE(s0.size() == 1);
    REQUIRE(s0.data() != nullptr);
    REQUIRE(s0.data() != bin);
    REQUIRE(s0.mask() == nullptr);

    REQUIRE_THROWS_AS(qis::signature(bin, 1, nullptr, 1), qis::invalid_signature);

    const qis::signature s2(bin, 1, bin, 0);
    REQUIRE(s2.size() == 1);
    REQUIRE(s2.data() != nullptr);
    REQUIRE(s2.data() != bin);
    REQUIRE(s2.mask() == nullptr);

    const qis::signature s3(bin, 1, bin, 1);
    REQUIRE(s3.size() == 1);
    REQUIRE(s3.data() != nullptr);
    REQUIRE(s3.data() != bin);
    REQUIRE(s3.mask() != nullptr);
    REQUIRE(s3.mask() != bin);
  }
}
```

This will require many `qis::scan` tests, especially when `mask` is set.
#include <qis/signature.hpp>
#include <print.hpp>
#include <cstdlib>

namespace qis {

using std::format;
using std::span;

void test(char* s, std::size_t n, const char* p, std::size_t k)
{
  print("p: {:>6}{} ", "", span(p, k));
  print(color::gray, "({})\n", k);
  print("s: {} ", span(s, n));
  print(color::red, "{} ..\n", span(s + n, 2));

  /*
  auto r = npos;
  switch (k) {
  case 1:
    if (const auto it = std::find(s, s + n, p[0]); it != s + n) {
      return it - s;
    } else {
      return r;
    }
  case 2:
    r = avx2_strstr_eq2(s, n, p);
    break;
  case 3:
    r = avx2_strstr_memcmp<3>(s, n, p, memcmp1);
    break;
  case 4:
    r = avx2_strstr_memcmp<4>(s, n, p, memcmp2);
    break;
  case 5:
    r = avx2_strstr_memcmp<5>(s, n, p, memcmp4);
    break;
  case 6:
    r = avx2_strstr_memcmp<6>(s, n, p, memcmp4);
    break;
  case 7:
    r = avx2_strstr_memcmp<7>(s, n, p, memcmp5);
    break;
  case 8:
    r = avx2_strstr_memcmp<8>(s, n, p, memcmp6);
    break;
  case 9:
    r = avx2_strstr_memcmp<9>(s, n, p, memcmp8);
    break;
  case 10:
    r = avx2_strstr_memcmp<10>(s, n, p, memcmp8);
    break;
  case 11:
    r = avx2_strstr_memcmp<11>(s, n, p, memcmp9);
    break;
  case 12:
    r = avx2_strstr_memcmp<12>(s, n, p, memcmp10);
    break;
  default:
    r = avx2_strstr_anysize(s, n, p, k);
    break;
  }
  return r <= n - k ? r : npos;
  */
}

}  // namespace qis

int main()
{
  try {
    std::vector<char> memory(128, 0);
    qis::signature search{ "DB 27 5B FA FB 5E F1 FC FD FE FD 56 AF" };
    std::memcpy(memory.data() + 2, search.data(), search.size());

    constexpr std::size_t k = 2;
    qis::test(memory.data(), 2 + k, search.data(), k);
  }
  catch (const std::exception& e) {
    std::fputs(e.what(), stderr);
    std::fputc('\n', stderr);
    std::fflush(stderr);
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}

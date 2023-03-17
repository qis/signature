#include <qis/signature.hpp>
#include <print.hpp>
#include <cstdlib>

namespace qis {

using std::format;
using std::span;

constexpr auto data_s256i0 =
  "\x11\x12\x13\x14\x15\x16\x17\x18"
  "\x21\x22\x23\x24\x25\x26\x27\x28"
  "\x31\x32\x33\x34\x35\x36\x37\x38"
  "\x41\x42\x43\x44\x45\x46\x47\x48";

constexpr auto data_s256i1 =
  "\x51\x52\x53\x54\x55\x56\x57\x58"
  "\x61\x62\x63\x64\x65\x66\x67\x68"
  "\x71\x72\x73\x74\x75\x76\x77\x78"
  "\x81\x82\x83\x84\x85\x86\x87\x88";

const auto data_m256i0 = reinterpret_cast<const __m256i*>(qis::data_s256i0);
const auto data_m256i1 = reinterpret_cast<const __m256i*>(qis::data_s256i1);

void test()
{
  const auto s0 = _mm256_loadu_si256(data_m256i0);
  const auto s1 = _mm256_loadu_si256(data_m256i1);
  print("s0: {}\n", s0);
  print("s1: {}\n", s1);

  //__m256i sn = _mm256_set1_epi8('\xFF');
  //sn = _mm256_inserti128_si256(sn, _mm256_extracti128_si256(s0, 1), 0);
  //sn = _mm256_inserti128_si256(sn, _mm256_extracti128_si256(s1, 0), 1);
  __m256i sn = _mm256_inserti128_si256(
    _mm256_castsi128_si256(_mm256_extracti128_si256(s0, 1)),
    _mm256_castsi256_si128(s1),
    1);
  print("sn: {}\n", sn);
  const __m256i ss = _mm256_alignr_epi8(sn, s0, 1);
  print("ss: {}\n", ss);
}

}  // namespace qis

int main()
{
  try {
    qis::test();
  }
  catch (const std::exception& e) {
    std::fputs(e.what(), stderr);
    std::fputc('\n', stderr);
    std::fflush(stderr);
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
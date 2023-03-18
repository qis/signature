#include <qis/signature.hpp>
#include <print.hpp>
#include <cstdlib>

namespace qis {

void test()
{
  const qis::signature s("?? 31 ?? 32 ??");
  std::vector<char> m(1026, '0');
  m[0] = 'A';
  m[1] = 'B';
  m[2] = 'C';
  m[3] = 'D';
  std::memcpy(m.data() + 4, s.data(), s.size());
  m[4 + s.size()] = 'E';
  m[4 + s.size()] = 'F';
  m[4 + s.size()] = 'G';
  m[4 + s.size()] = 'H';
  m[1022] = 'X';
  m[1023] = 'Y';
  m[1024] = 'Z';
  m[1025] = '\0';
  const auto r = qis::scan(m.data(), 1024, s);

  print("s: {:>11}\"{}\"\n", "", span(s.data(), s.size()));
  print("m: {} ..\n", span(m.data(), 16));
  print("r: {} (should be 4)\n", r);
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
#define DOCTEST_CONFIG_IMPLEMENT
#include <doctest/doctest.h>
#include <cstdio>
#include <cstdlib>

int main(int argc, char* argv[])
{
  try {
    doctest::Context context;
    context.applyCommandLine(argc, argv);
    context.setOption("no-version", 1);
    return context.run();
  }
  catch (const std::exception& e) {
    std::fputs(e.what(), stderr);
    std::fputc('\n', stderr);
    std::fflush(stderr);
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}

#include "memory.hpp"
#include <qis/signature.hpp>
#include <chrono>
#include <format>
#include <string>

using namespace mem::literals;

int main()
{
  using milliseconds = std::chrono::duration<double, std::chrono::milliseconds::period>;

  const auto tp0 = std::chrono::high_resolution_clock::now();
  const auto data = mem::get(2_gib);
  const auto tp1 = std::chrono::high_resolution_clock::now();
  const auto ms0 = std::chrono::duration_cast<milliseconds>(tp1 - tp0).count();
  std::puts(std::format("{} bytes in {:6.1f} ms (generate)", data.size(), ms0).data());

  const qis::signature search(mem::signature(3));
  const auto tp2 = std::chrono::high_resolution_clock::now();
  const auto pos = qis::scan(data.data(), data.size(), search);
  const auto tp3 = std::chrono::high_resolution_clock::now();
  const auto ms1 = std::chrono::duration_cast<milliseconds>(tp3 - tp2).count();
  std::puts(std::format("{} bytes in {:6.1f} ms (scan)", pos, ms1).data());

  mem::print({ data.data() + data.size() - 32, 32 });
}
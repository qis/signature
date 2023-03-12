#include "memory.hpp"
#include <qis/signature.hpp>
#include <format>
#include <string>

using namespace mem::literals;

int main() {
  const auto data = mem::get();
  std::puts(std::format("{} bytes", data.size()).data());
  mem::print(data);
}
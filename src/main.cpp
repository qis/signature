#include "memory.hpp"
#include <qis/signature.hpp>

using namespace mem::literals;

int main()
{
  auto data = mem::create(1_kib, "01 02 ?? 04");
  mem::print(data);
  mem::write(data, 1_kib - 2, "AB CD EF");
  mem::print(data);
}
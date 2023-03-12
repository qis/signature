#include "memory.hpp"
#include <qis/signature.hpp>
#include <mutex>
#include <string>
#include <iostream>

#include <tbb/task.h>

using namespace mem::literals;

int main()
{
  std::mutex mutex;
  std::string str("0123456789ABCDEF");
  const auto s = str.data();
  const auto n = str.size();
  const tbb::blocked_range range(s, s + n, 5);
  tbb::parallel_for(range, [&](const tbb::blocked_range<char*>& range) noexcept {
    std::lock_guard lock(mutex);
    std::cout << range.size() << std::endl;
    tbb::task::current_context()->cancel_group_execution();
  });
}
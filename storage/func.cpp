#include <iostream>
#include <source_location>

#include "func.hpp"

void func()
{
    auto location = std::source_location::current();
    std::cout << "function: " << location.function_name() << std::endl;
    std::cout << "file: " << location.file_name() << std::endl;
    std::cout << "line: " << location.line() << std::endl;
    std::cout << "column: " << location.column() << std::endl;
}

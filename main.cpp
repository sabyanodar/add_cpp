#include <iostream>

#include "add.hpp"

int main() {
    std::cout << "Add ints: " << add(2, 3) << std::endl;
    std::cout << "Add floats: " << add(2.5f, 3.1f) << std::endl;
    return 0;
}

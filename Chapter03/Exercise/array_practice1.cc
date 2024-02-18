#include <array>
#include <cstdint>
#include <iostream>

// Table of 3
int main() {
    auto arr = std::array<unsigned long, std::size_t{11}>{};
    unsigned long multiplier = 3;
    for (std::size_t i = 0; i < arr.size(); i++) {
        arr[i] = i * multiplier;
    }

    for (std::size_t i = 0; i < arr.size(); i++) {
        std::cout << i << " * " << multiplier << " = " << arr[i] << std::endl;
    }
}

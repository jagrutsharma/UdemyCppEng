#include <array>
#include <cstdint>
#include <iostream>

// c style array as param => it will decay to a pointer (64bits = 8bytes)
void print_array_values1(const std::uint32_t arr[], const std::size_t len)
{
    for (std::size_t i = 0; i < len; i++)
    {
        std::cout << arr[i] << '\n';
    }
}

// THIS IS THE RECOMMENDED WAY
template <std::size_t N>
void print_array_values2(const std::array<std::uint32_t, N> arr)
{
    for (std::size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << '\n';
    }
}

void print_array_values3(const std::uint32_t arr[]) {
    // This is incorrect, size will be 8 even if we are passing a 5 length array (since it will decay to 8 byte pointer)
    // const auto size = sizeof(arr);

    const auto size = 5;
    for (std::uint32_t i = 0; i < size; i++) {
        std::cout << arr[i] << '\t';
    }
    std::cout << std::endl;
}

int main()
{

    std::cout << "----- Array 3 -----" << '\n';
    constexpr static auto myArrayLen = std::uint32_t{5};
    std::uint32_t my_first_array[myArrayLen] = {10, 20, 30, 40, 50};
    print_array_values3(my_first_array);

    std::cout << "----- Array 1 -----" << '\n';
    constexpr static auto len = std::size_t{5};

    // C-Style Array
    std::uint32_t my_array[len] = {1, 2, 3, 4, 5};
    print_array_values1(my_array, len);

    std::cout << "----- Array 2 (RECOMMENDED) -----" << '\n';
    // C++ Array
    auto my_array2 = std::array<std::uint32_t, len>{1, 2, 3, 4, 5};
    print_array_values2(my_array2);

    return 0;
}

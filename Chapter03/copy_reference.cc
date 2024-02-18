#include <array>
#include <cstdint>
#include <iostream>

template <std::size_t N>
void print_array_values(const std::array<std::uint32_t, N> &arr) // input only: const, 8bytes
{
    std::cout << "(in function by ref) Address of my_array is " << &arr << std::endl;
    for (std::size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << '\n';
    }
}

template <std::size_t N>
void print_array_values_making_copy(const std::array<std::uint32_t, N> arr) // will make copy
{
    std::cout << "(in function by copy) Address of my_array is " << &arr << std::endl;
    for (std::size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << '\n';
    }
}

// The parameter arr is coming by reference, and will be modified by the function
template <std::size_t N>
void double_value(std::array<std::uint32_t, N> &arr) // in and output, no const, but reference
{
    for (std::size_t i = 0; i < arr.size(); i++)
    {
        arr[i] = arr[i] * 2;
    }
}

int main()
{
    auto my_array = std::array<std::uint32_t, 5U>{1, 2, 3, 4, 5};
    std::cout << "(main) Address of my_array is " << &my_array << std::endl;
    print_array_values(my_array);
    print_array_values_making_copy(my_array);
    double_value(my_array);
    print_array_values(my_array);

    return 0;
}

#include <array>
#include <cstdint>
#include <iostream>
#include <span>
#include <vector>

// std::vector<std::int8_t>  =>  ByteVector

// C Style
// In C, there are are no templates
typedef std::vector<std::int8_t> ByteVector1;

// C++ Style (RECOMMENDED)
using ByteVector2 = std::vector<std::int8_t>;

using UsualInt = std::int32_t;

template <typename T>
using VecOfIntegers = std::vector<T>;

template <typename T>
void print_container(std::span<T> span)
{
    for (const auto val : span)
    {
        std::cout << val << '\n';
    }
}

int main()
{
    auto my_vec = std::vector<std::int32_t>{1, 2, 3, 4, 5};
    auto my_arr = std::array<std::uint16_t, 5U>{1, 2, 3, 4, 5};
    std::uint64_t my_c_arr[] = {1, 2, 3, 4, 5};

    print_container<std::int32_t>(my_vec);
    print_container<std::uint16_t>(my_arr);
    print_container<std::uint64_t>(my_c_arr);

    UsualInt a = 10;
    UsualInt b = 20;
    std::cout << a + b << std::endl;

    return 0;
}

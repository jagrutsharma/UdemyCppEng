#include <array>
#include <cstdint>
#include <iostream>
#include <span>
#include <vector>
using namespace std;
// All standard library containers are templated classes
// template type (C++) = generic type (Java)

template <typename T>
void print_container(std::span<T> span)
{
    cout << "Templatized Container" << endl;
    for (const auto val : span)
    {
        std::cout << val << '\n';
    }
}

template <typename X> X add_nums2(X a, X b) {
    return a + b;
}

// This function only takes int32_t type. Better to use generic type.
void print_container2(std::span<std::int32_t> span) {
    cout << "Normal Container" << endl;
    for (const auto val : span) {
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

    cout << add_nums2(32, 1) << endl;

    return 0;
}

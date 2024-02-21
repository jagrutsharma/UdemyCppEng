#include <cstdint>
#include <iostream>
#include <vector>

int main()
{
    auto my_vec = std::vector<std::int32_t>{1, 2, 3, 4, 5};

    // // C-style for loop for value lookup
    // for (std::size_t i = 0; i < my_vec.size(); i++)
    // {
    //     std::cout << my_vec[i] << '\n';
    // }

    // // begin, end iterator
    // // C++ ranged loop, value == my_vec[i]
    // for (const auto value : my_vec) // read only, a copy is made
    // {
    //     std::cout << value << '\n';
    // }

    // for (auto &value : my_vec) // write and read, since we are working with original vector value using reference
    // {
    //     value *= 2;
    // }

    // for (const auto value : my_vec) // read only
    // {
    //     std::cout << value << '\n';
    // }

    auto my_vec2 = std::vector<std::int32_t>(10, 0); // 10 value all with init 0
    // for (const auto value : my_vec2) // read only
    // {
    //     std::cout << value << '\n';
    // }

    auto my_vec3 = std::vector<std::int32_t>{};  // empty container
    my_vec3.push_back(10);
    my_vec3.push_back(22);
    for (const auto value : my_vec3) // read only
    {
        std::cout << value << '\n';
    }

    // my_vec3.pop_back();
    // for (const auto value : my_vec3) // read only
    // {
    //     std::cout << value << '\n';
    // }

    std::cout << "I am beginning to iterate via iterator now" << std::endl;
    auto it_begin = my_vec2.begin(); // points to the first element (INCLUSIVE)
    auto it_end = my_vec2.end();     // points after the last element (EXCLUSIVE)

    for (it_begin; it_begin != it_end; it_begin++)
    {
        // Take care use *it_begin to get to the value, since it_begin is a pointer.
        std::cout << *it_begin << '\n';
    }

    std::cout << '\n';
    my_vec2.insert(my_vec2.begin() + 3, 100);
    for (const auto value : my_vec2) // read only
    {
        std::cout << value << '\n';
    }

    // practice'
    std::cout << "Now, my turn" << std::endl;
    std::vector<std::int32_t>numbers(20, 0);
    auto iter_begin = numbers.begin();
    auto iter_end = numbers.end();
    numbers.insert(iter_begin + 2, -999);   // Update index 2
    for (const auto n : numbers) {
        std::cout << n << '\t';
    }
    std::cout << std::endl;

    for (auto iter2 = numbers.begin(); iter2 < numbers.end(); iter2++) {
        std::cout << *iter2 << '\t';
    }

    return 0;
}

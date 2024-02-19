#include <array>
#include <cstdint>
#include <iostream>

int main()
{
    const auto len = std::size_t{5};
    std::uint32_t my_array[len] = {1, 2, 3, 4, 5}; // stack

    auto len2 = std::size_t{};
    std::cin >> len2;

    // Variable length function: Created on heap via new function. Returns a pointer
    std::uint32_t *heap_arr = new std::uint32_t[len2];
    std::cout << "Address of heap array: " << heap_arr << '\n';
    std::cout << "Contents of heap array: " << *heap_arr << '\n';


    if (heap_arr != nullptr)
    {
        for (std::size_t i = 0; i < len2; i++)
        {
            // explicit casting since i is of type size_t and hep_arr is of type uint32_t
            heap_arr[i] = static_cast<std::uint32_t>(i);
        }

        for (std::size_t i = 0; i < len2; i++)
        {
            std::cout << heap_arr[i] << '\n';
        }
    }

    delete[] heap_arr; // free the heap memory
    heap_arr = nullptr;

    // false of a pointer: pointer == nullptr
    // true of a pointer: pointer != nullptr
    if (heap_arr)
    {
        std::cout << heap_arr[1];
    }

    if (!heap_arr)
    {
        std::cout << "Invalid Ptr!\n";
    }

    return 0;
}

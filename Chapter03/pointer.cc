#include <array>
#include <cstdint>
#include <iostream>

template <std::size_t N>
void print_array_values(const std::array<std::uint32_t, N> *arr)
{
    std::cout << "Address of my_array in function (should be same since passed via pointer): " << arr << '\n';
    // We use the -> operator since arr is a pointer
    // Also note how we use the (*arr) to get to the index of the value
    for (std::size_t i = 0; i < arr->size(); i++)
    {
        std::cout << (*arr)[i] << '\n';
    }
    std::cout << "Actual elements printed" << std::endl;
}

int main()
{
    std::uint32_t value = 42;

    std::uint32_t *value_ptr = &value;
    std::cout << "address of 42: " << value_ptr << '\n';
    std::cout << "value of 42: " << *value_ptr << '\n';

    auto my_array = std::array<std::uint32_t, 5U>{1, 2, 3, 4, 5};
    std::cout << "Address of my_array: " << &my_array << '\n';
    print_array_values(&my_array);

    // My practice
    std::uint16_t age = 21;
    std::uint16_t *age_ptr = &age;
    std::cout << "age:" << age << '\n';
    std::cout << "age via ptr: " << *age_ptr << '\n';       // * is deference operator
    std::cout << "age address: " << &age << '\n';           // print address of where age is stored
    std::cout << "age ptr value: " << age_ptr << '\n';      // print value of age_ptr (which should be the age above)
    return 0;
}

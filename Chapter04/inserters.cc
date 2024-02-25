#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    const auto my_vector = std::vector{0, 1, 2, 3, 4, 5};
    auto my_result1 = std::vector<int>{-1, -2};
    auto my_result2 = std::vector<int>{11, 12};

    // container must implement "insert"
    // We are copying my_vector [0,1,2,3,4,5] into my_result1 which already has [-1, -2]
    // 2nd argument of std::inserter specifies the position index where we want to insert
    std::copy(my_vector.begin(),
              my_vector.end(),
              std::inserter(my_result1, std::next(my_result1.begin())));
    for (const auto val : my_result1)
        std::cout << val << " ";
    std::cout << '\n';
    my_result1.clear();

    // container must implement "push_back"
    // std::back_inserter will always insert at the end
    std::copy(my_vector.begin(),
              my_vector.end(),
              std::back_inserter(my_result2));
    for (const auto val : my_result2)
        std::cout << val << " ";
    std::cout << '\n';
    my_result2.clear();

    return 0;
}

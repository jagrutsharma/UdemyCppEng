#include <cstdint>
#include <iostream>
#include <map>

// Get as a reference, otherwise it will make a copy that we don't want
void print_map(const std::map<std::string, std::int32_t> &map)
{
    // Iterating amap in a loop
    // Get as a refernce using &
    // Other if you use [key, val], it will make a copy which we likely don't want
    // since we are just reading
    for (const auto &[key, val] : map)
    {
        std::cout << key << ": " << val << '\n';
    }

    std::cout << '\n';
}

int main()
{
    // key & value
    auto my_map = std::map<std::string, std::int32_t>{{"Jan", 28}};

    my_map["Sam"] = 40;
    my_map["Veronika"] = 24;
    my_map["Tom"] = 23;

    print_map(my_map);

    my_map["Veronika"] = 25;

    print_map(my_map);

    bool maryExists = my_map.contains("Mary");
    std::cout << "Mary exists? " << maryExists << std::endl;
    if (!maryExists) {
        my_map["Mary"] = 72;
    }

    if (!my_map.contains("Sam"))
    {
        my_map["Sam"] = 40;
    }
    if (!my_map.contains("Lisa"))
    {
        my_map["Lisa"] = 36;
    }

    print_map(my_map);

    const auto it_find = my_map.find("Lisa");
    if (it_find != my_map.end())
    {
        // (*it_find) is the pair from map. Use the "first" to get the key.
        std::cout << (*it_find).first << '\n';
    }

    std::cout << my_map["Lisa"] << std::endl;
};

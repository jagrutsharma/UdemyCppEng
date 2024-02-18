#include <iostream>
#include <string>

int main() {
    auto message = std::string{"Hello, World!"};
    std::cout << message << std::endl;
    std::cout << message.starts_with("Hello") << std::endl;
}

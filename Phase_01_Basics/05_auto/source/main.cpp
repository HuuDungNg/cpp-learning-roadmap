#include <iostream>
#include <vector>

int main() {
    auto value = 42;
    auto text = std::string("Auto type deduced!");
    auto numbers = std::vector<int>{1, 2, 3, 4, 5};

    std::cout << text << " value=" << value << " size=" << numbers.size() << '\n';
    return 0;
}

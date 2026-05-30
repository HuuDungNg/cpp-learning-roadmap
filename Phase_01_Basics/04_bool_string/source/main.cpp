#include <iostream>
#include <string>

int main() {
    bool isReady = true;
    std::string message = "C++ strings are easy to use.";

    std::cout << std::boolalpha;
    std::cout << "Is ready? " << isReady << '\n';
    std::cout << message << '\n';
    return 0;
}

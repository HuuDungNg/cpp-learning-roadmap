#include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "int: " << add(1, 2) << '\n';
    std::cout << "double: " << add(1.5, 2.5) << '\n';
    return 0;
}

#include <iostream>

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    std::cout << "int: " << add(2, 3) << '\n';
    std::cout << "double: " << add(2.5, 3.5) << '\n';
    return 0;
}

#include <iostream>

void increment(int &value) {
    value += 1;
}

int main() {
    int a = 5;
    increment(a);
    std::cout << "a after increment = " << a << '\n';
    return 0;
}

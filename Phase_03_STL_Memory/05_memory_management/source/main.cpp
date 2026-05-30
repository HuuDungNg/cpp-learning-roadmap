#include <iostream>

int main() {
    int *value = new int(42);
    std::cout << "Value = " << *value << '\n';
    delete value;
    return 0;
}

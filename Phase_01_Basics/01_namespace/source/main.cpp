#include <iostream>

namespace math {
    int add(int a, int b) {
        return a + b;
    }
}

namespace print {
    void hello() {
        std::cout << "Hello from print namespace!\n";
    }
}

int main() {
    std::cout << "3 + 4 = " << math::add(3, 4) << '\n';
    print::hello();
    return 0;
}

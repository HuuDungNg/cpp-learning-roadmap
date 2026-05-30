#include <iostream>
#include <vector>

int main() {
    std::vector<int> values{1, 2, 3, 4, 5};

    for (auto it = values.begin(); it != values.end(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << '\n';
    return 0;
}

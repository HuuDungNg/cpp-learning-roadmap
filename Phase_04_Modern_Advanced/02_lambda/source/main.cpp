#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers{1, 2, 3, 4, 5};
    int sum = 0;
    std::for_each(numbers.begin(), numbers.end(), [&sum](int value) {
        sum += value;
    });
    std::cout << "Sum = " << sum << '\n';
    return 0;
}

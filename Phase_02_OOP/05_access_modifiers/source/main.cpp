#include <iostream>

class Counter {
public:
    Counter() : count_(0) {}
    void increment() { ++count_; }
    int value() const { return count_; }
private:
    int count_;
};

int main() {
    Counter counter;
    counter.increment();
    std::cout << "Count = " << counter.value() << '\n';
    return 0;
}

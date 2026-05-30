#include <iostream>
#include <string>

class Movable {
public:
    Movable(std::string value) : value_(std::move(value)) {}
    Movable(Movable &&other) noexcept : value_(std::move(other.value_)) {
        std::cout << "Move constructor called\n";
    }
    Movable &operator=(Movable &&other) noexcept {
        value_ = std::move(other.value_);
        std::cout << "Move assignment called\n";
        return *this;
    }
private:
    std::string value_;
};

int main() {
    Movable a("Hello");
    Movable b(std::move(a));
    return 0;
}

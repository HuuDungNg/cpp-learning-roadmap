#include <iostream>
#include <string>

class Logger {
public:
    Logger(const std::string &name) : name_(name) {
        std::cout << "Constructing " << name_ << "\n";
    }
    ~Logger() {
        std::cout << "Destroying " << name_ << "\n";
    }
private:
    std::string name_;
};

int main() {
    Logger logger("ExampleLogger");
    return 0;
}

#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource released\n"; }
};

int main() {
    std::unique_ptr<Resource> resource = std::make_unique<Resource>();
    return 0;
}

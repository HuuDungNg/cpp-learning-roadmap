#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
};

int main() {
    Person p{"Alice", 30};
    std::cout << p.name << " is " << p.age << " years old.\n";
    return 0;
}

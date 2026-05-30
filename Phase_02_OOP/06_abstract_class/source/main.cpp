#include <iostream>

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    Circle(double radius) : radius_(radius) {}
    double area() const override {
        return 3.14159 * radius_ * radius_;
    }
private:
    double radius_;
};

int main() {
    Circle circle(2.0);
    std::cout << "Circle area: " << circle.area() << '\n';
    return 0;
}

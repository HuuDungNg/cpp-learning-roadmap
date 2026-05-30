#include <iostream>

class Point {
public:
    Point(int x, int y) : x_(x), y_(y) {}
    Point operator+(const Point &other) const {
        return Point{x_ + other.x_, y_ + other.y_};
    }
    void print() const {
        std::cout << "(" << x_ << ", " << y_ << ")\n";
    }
private:
    int x_;
    int y_;
};

int main() {
    Point a{1, 2};
    Point b{3, 4};
    Point c = a + b;
    c.print();
    return 0;
}

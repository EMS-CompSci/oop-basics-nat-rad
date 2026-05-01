#include <iostream>
#include <cmath>
#include <string>

class Point {
private:
    double x;
    double y;

public:
    Point(double initialX, double initialY)
        : x(initialX), y(initialY) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    std::string toString() const {
        return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    }

    double distanceTo(const Point &anotherPoint) const {
        double x1 = getX();
        double y1 = getY();
        double x2 = anotherPoint.getX();
        double y2 = anotherPoint.getY();
        double xdif = x2 - x1;
        double ydif = y2 - y1;
        return std::sqrt(xdif * xdif + ydif * ydif);
    }
};

int main() {
    Point p1(0.0, 0.0);
    Point p2(3.0, 4.0);
    Point p3(26.0, 34.5);

    std::cout << "p1 = " << p1.toString() << std::endl;
    std::cout << "p2 = " << p2.toString() << std::endl;
    std::cout << "p3 = " << p3.toString() << std::endl;

    std::cout << "p2.x = " << p2.getX() << std::endl;
    std::cout << "p3.y = " << p3.getY() << std::endl;

    double distance = p1.distanceTo(p2);
    std::cout << "distance " << distance << std::endl;

    return 0;
}
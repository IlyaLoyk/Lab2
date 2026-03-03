#include "vector2.h"
#include <cmath>

// Реалізація конструктора за замовчуванням
vector2::vector2() : x(0.0), y(0.0) {}

// Реалізація конструктора з параметрами
vector2::vector2(double x, double y) : x(x), y(y) {}

// Реалізація конструктора копіювання
vector2::vector2(const vector2& other) : x(other.x), y(other.y) {}

// Реалізація деструктора
vector2::~vector2() {}

double vector2::getX() const { return x; }
double vector2::getY() const { return y; }

// Обчислення полярних координат
double vector2::getLength() const {
    return std::sqrt(x * x + y * y);
}

double vector2::getAngle() const {
    return std::atan2(y, x);
}
#pragma once

class vector2 {
private:
    double x;
    double y;

public:
    // Конструктор за замовчуванням
    vector2();

    // Конструктор з параметрами
    vector2(double x, double y);

    // Конструктор копіювання
    vector2(const vector2& other);

    // Деструктор
    ~vector2();

    double getX() const;
    double getY() const;

    double getLength() const;
    double getAngle() const;
};
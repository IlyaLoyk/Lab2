using System;

namespace vectorlibrary
{
    public class vector2
    {
        private double _x;
        private double _y;

        // Конструктор за замовчуванням
        public vector2()
        {
            _x = 0.0;
            _y = 0.0;
        }

        // Конструктор з параметрами
        public vector2(double x, double y)
        {
            _x = x;
            _y = y;
        }

        // Конструктор копіювання
        public vector2(vector2 other)
        {
            _x = other._x;
            _y = other._y;
        }

        // Деструктор
        ~vector2()
        {
        }

        public double X { get { return _x; } }
        public double Y { get { return _y; } }

        public double GetLength()
        {
            return Math.Sqrt(_x * _x + _y * _y);
        }

        public double GetAngle()
        {
            return Math.Atan2(_y, _x);
        }
    }
}
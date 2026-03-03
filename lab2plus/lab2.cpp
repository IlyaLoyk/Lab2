#include <iostream>
#include "vector2.h"
#include <Windows.h>

#pragma comment(lib, "vector2.lib")

using namespace std;

int main() {
    setlocale(LC_ALL, "UKR");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    cout << "Тестування класу vector2" << endl;

    // 1. Виклик конструктора за замовчуванням
    vector2 v1;
    cout << "v1 (За замовчуванням): X=" << v1.getX() << ", Y=" << v1.getY() << endl;

    // 2. Виклик конструктора з параметрами
    vector2 v2(3.0, 4.0);
    cout << "\nv2 (З параметрами): X=" << v2.getX() << ", Y=" << v2.getY() << endl;
    cout << "v2 Полярнi координати:" << endl;
    cout << " - Довжина: " << v2.getLength() << endl;
    cout << " - Кут: " << v2.getAngle() << endl;

    // 3. Виклик конструктора копіювання
    vector2 v3 = v2;
    cout << "\nv3 (Копiя v2): X=" << v3.getX() << ", Y=" << v3.getY() << endl;

    return 0;
}
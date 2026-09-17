// Выполнил: Волошенко М. Е., группа ПИ-51.
// Лабораторная работа № 1. Вариант № 5.
//Правка с первого компьютера
#include <iostream>
#include <cmath> // для sqrt()
using namespace std;
//Правка со второго компьютера
// ===== Расчётные функции варианта =====

// Площадь треугольника по трём сторонам a, b, c (формула Герона)
double triangleArea(double a, double b, double c) {
    double p = (a + b + c) / 2.0; // полупериметр
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
// Вторая расчётная функция: периметр треугольника
// Периметр треугольника со сторонами a, b, c
double trianglePerimeter(double a, double b, double c) {
    return a + b + c;
}

// ===== Главная функция: меню =====
int main() {
    int choice;
    double a, b, c;
    do {
        cout << "--- Программа расчётов. Вариант 5 ---\n";
        cout << "1. Площадь\n";
        cout << "2. Периметр\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите стороны a, b, c: ";
                cin >> a >> b >> c;
                if (a + b <= c || a + c <= b || b + c <= a) {
                    cout << "Ошибка: треугольник с такими сторонами не существует!\n";
                    break;
                }
                cout << "Площадь = " << triangleArea(a, b, c) << "кв. см\n";
                break;

            case 2:
                cout << "Введите стороны a, b, c: ";
                cin >> a >> b >> c;
                if (a + b <= c || a + c <= b || b + c <= a) {
                    cout << "Ошибка: треугольник с такими сторонами не существует!\n";
                    break;
                }
                cout << "Периметр = " << trianglePerimeter(a, b, c) << " см\n";
                break;

            case 0:
                cout << "Работа завершена.\n";
                break;

            default:
                cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);
    return 0;
}

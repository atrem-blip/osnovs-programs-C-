#include <iostream>

int main() {
    int a, b;

    std::cout << "Введите два целых числа (a и b): ";
    if (!(std::cin >> a >> b)) {
        std::cerr << "Ошибка ввода!\n";
        return 1;
    }

    if (b == 0) {
        std::cerr << "Ошибка: деление на ноль недопустимо.\n";
        return 1;
    }

    // Целочисленное деление (оба операнда — int)
    int intResult = a / b;

    // Деление с плавающей точкой: приводим один из операндов к double
    double doubleResult = static_cast<double>(a) / b;

    std::cout << "\n--- Результаты деления ---\n";
    std::cout << a << " / " << b << " (целочисленное) = " << intResult << "\n";
    std::cout << a << " / " << b << " (с плавающей точкой) = " << doubleResult << "\n";

    std::cout << "\n--- Сравнение результатов ---\n";
    if (intResult == doubleResult) {
        std::cout << "Результаты совпадают (деление нацело).\n";
    } else {
        std::cout << "Результаты различаются: целочисленное деление отбросило дробную часть.\n";
        std::cout << "Разница: " << (doubleResult - intResult) << "\n";
    }

    return 0;
}

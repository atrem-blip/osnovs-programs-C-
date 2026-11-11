#include <iostream>

int main() {
    int x, y;

    // Ввод двух целых чисел
    std::cout << "Введите два целых числа (x и y): ";
    if (!(std::cin >> x >> y)) {
        std::cerr << "Ошибка ввода!\n";
        return 1;
    }

    // Включаем текстовый вывод для bool (true/false)
    std::cout << std::boolalpha;

    std::cout << "\n--- Результаты операций сравнения ---\n";
    std::cout << x << " == " << y << " -> " << (x == y) << "\n";
    std::cout << x << " != " << y << " -> " << (x != y) << "\n";
    std::cout << x << " <  " << y << " -> " << (x < y) << "\n";
    std::cout << x << " >  " << y << " -> " << (x > y) << "\n";
    std::cout << x << " <= " << y << " -> " << (x <= y) << "\n";
    std::cout << x << " >= " << y << " -> " << (x >= y) << "\n";

    std::cout << "\n--- Результаты логических выражений ---\n";
    std::cout << "(x > 0) && (y > 0) -> " << ((x > 0) && (y > 0)) << "\n";
    std::cout << "(x > 0) || (y > 0) -> " << ((x > 0) || (y > 0)) << "\n";
    std::cout << "!(x == y)          -> " << (!(x == y)) << "\n";

    return 0;
}

#include <iostream>
#include <cmath>

int main() {
    int choice;
    double number, result;

    do {
        std::cout << "Меню:\n";
        std::cout << "1 — квадрат числа\n";
        std::cout << "2 — корень числа\n";
        std::cout << "0 — выход\n";
        std::cout << "Выберите пункт: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Введите число: ";
            std::cin >> number;
            result = number * number;
            std::cout << "Квадрат числа: " << result << "\n\n";
        } else if (choice == 2) {
            std::cout << "Введите число (>= 0): ";
            std::cin >> number;
            if (number < 0) {
                std::cout << "Ошибка: корень из отрицательного числа не определён (в вещественных числах).\n\n";
            } else {
                result = std::sqrt(number);
                std::cout << "Корень числа: " << result << "\n\n";
            }
        } else if (choice != 0) {
            std::cout << "Неверный пункт меню. Попробуйте снова.\n\n";
        }
    } while (choice != 0);

    std::cout << "Программа завершена.\n";
    return 0;
}

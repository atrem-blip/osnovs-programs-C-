#include <iostream>

int main() {
    long long sum = 0;
    int value;

    while (true) {
        std::cout << "Введите число (0 — выход): ";
        std::cin >> value;

        if (value == 0) {
            break; // выход из цикла
        }

        if (value < 0) {
            continue; // отрицательные пропускаем
        }

        sum += value; // суммируем только положительные
    }

    std::cout << "Сумма положительных чисел: " << sum << "\n";
    return 0;
}

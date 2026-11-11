#include <iostream>

int main() {
    const int LIMIT = 100;

    double sum = 0.0;
    double value;
    int count = 0;

    do {
        std::cout << "Введите число: ";
        std::cin >> value;
        sum += value;
        count++;
    } while (sum <= LIMIT);

    std::cout << "Сумма превысила " << LIMIT << ".\n";
    std::cout << "Потребовалось чисел: " << count << "\n";
    std::cout << "Итоговая сумма: " << sum << "\n";

    return 0;
}

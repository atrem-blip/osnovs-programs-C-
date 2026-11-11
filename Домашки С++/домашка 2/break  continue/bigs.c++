#include <iostream>

int main() {
    int result = -1;

    for (int i = 50; i <= 200; ++i) {
        if (i % 7 == 0 && i % 11 == 0) {
            result = i;
            break; // нашли первое — выходим
        }
    }

    if (result != -1) {
        std::cout << "Первое число от 50 до 200, делящееся на 7 и 11: " << result << "\n";
    } else {
        std::cout << "Такого числа нет.\n";
    }

    return 0;
}

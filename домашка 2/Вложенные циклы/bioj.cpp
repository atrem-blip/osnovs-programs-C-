#include <iostream>

int main() {
    const int HEIGHT = 6;

    for (int i = 1; i <= HEIGHT; ++i) {
        // Пробелы слева: от максимума до 1
        for (int j = 0; j < HEIGHT - i; ++j) {
            std::cout << " ";
        }
        // Звёзды: нечётное количество (1, 3, 5, ...)
        for (int j = 0; j < 2 * i - 1; ++j) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}

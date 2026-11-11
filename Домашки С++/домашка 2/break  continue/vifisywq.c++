#include <iostream>

int main() {
    std::cout << "Числа от 1 до 30 (кроме делящихся и на 3, и на 5):\n";

    for (int i = 1; i <= 30; ++i) {
        // Если делится и на 3, и на 5 — пропускаем эту итерацию
        if (i % 3 == 0 && i % 5 == 0) {
            continue;
        }
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}

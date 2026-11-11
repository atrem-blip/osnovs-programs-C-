#include <iostream>

int main() {
    long long sum = 0;

    for (int i = 1; i <= 100; ++i) {
        if (i % 7 == 0) {
            continue; // пропускаем числа, делящиеся на 7
        }
        sum += i;
    }

    std::cout << "Сумма чисел от 1 до 100 (исключая делящиеся на 7): " << sum << "\n";
    return 0;
}

#include <iostream>

int main() {
    int count = 0;

    for (int n = 1; n <= 1000; ++n) {
        int temp = n;
        bool hasSeven = false;

        // Разбираем число на цифры: % 10 — последняя цифра, / 10 — отбрасываем её
        while (temp > 0) {
            if (temp % 10 == 7) {
                hasSeven = true;
                break;
            }
            temp /= 10;
        }

        if (hasSeven) {
            ++count;
        }
    }

    std::cout << "Чисел от 1 до 1000, содержащих цифру 7: " << count << "\n";
    return 0;
}

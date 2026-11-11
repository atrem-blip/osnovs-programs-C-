#include <iostream>

int main() {
    bool found = false;

    for (int a = 1; a <= 10 && !found; ++a) {
        for (int b = 1; b <= 10; ++b) {
            if (a * b == 24 && a < b) {
                std::cout << "Первая пара: a = " << a << ", b = " << b << "\n";
                found = true;
                break; // выходим из внутреннего цикла
            }
        }
        // found == true => условие a <= 10 && !found станет ложным
        // и внешний цикл тоже завершится
    }

    if (!found) {
        std::cout << "Такой пары нет.\n";
    }

    return 0;
}

#include <iostream>

int main() {
    const int CURRENT_YEAR = 2026;
    const int MIN_YEAR = 1900;
    const int MAX_YEAR = 2025;

    int birthYear;

    do {
        std::cout << "Введите год рождения (от " << MIN_YEAR << " до " << MAX_YEAR << "): ";
        std::cin >> birthYear;
        if (birthYear < MIN_YEAR || birthYear > MAX_YEAR) {
            std::cout << "Год вне допустимого диапазона. Попробуйте ещё раз.\n";
        }
    } while (birthYear < MIN_YEAR || birthYear > MAX_YEAR);

    int age = CURRENT_YEAR - birthYear;
    std::cout << "Ваш возраст: " << age << " лет.\n";

    return 0;
}

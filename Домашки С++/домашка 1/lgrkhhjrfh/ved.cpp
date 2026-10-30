#include <iostream>
#include <string>

int main() {
    std::string input;

    // Ввод строки с целым числом
    std::cout << "Введите строку с целым числом: ";
    if (!(std::cin >> input)) {
        std::cerr << "Ошибка ввода!\n";
        return 1;
    }

    try {
        // Преобразование строки в int через std::stoi
        int value = std::stoi(input);
        int multiplied = value * 3;

        std::cout << "\n--- Работа с int ---\n";
        std::cout << "Исходное число: " << value << "\n";
        std::cout << "Число × 3: " << multiplied << "\n";

        // Преобразование результата обратно в строку через std::to_string
        std::string resultStr = std::to_string(multiplied);
        std::cout << "Результат как строка: \"" << resultStr << "\"\n";

        // Преобразование строки "3.14" в double через std::stod
        std::string piStr = "3.14";
        double piValue = std::stod(piStr);

        std::cout << "\n--- Работа с double ---\n";
        std::cout << "Строка \"" << piStr << "\" преобразована в double: " << piValue << "\n";
    } catch (const std::invalid_argument&) {
        std::cerr << "Ошибка: введённая строка не является корректным числом.\n";
        return 1;
    } catch (const std::out_of_range&) {
        std::cerr << "Ошибка: число выходит за пределы диапазона int.\n";
        return 1;
    }

    return 0;
}

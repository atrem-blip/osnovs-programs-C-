#include <iostream>
#include <iostream>


int main() {
    int a, b;

    // Ввод двух целых чисел
    std::cout << "Введите два целых числа (a и b): ";
    if (!(std::cin >> a >> b)) {
        std::cerr << "Ошибка ввода!\n";
        return 1;
    }

    // Проверка на деление на ноль для операций / и %
    if (b == 0) {
        std::cerr << "Ошибка: деление на ноль недопустимо для операций '/' и '%'.\n";
        return 1;
    }

    std::cout << "\n--- Обычные арифметические операции ---\n";
    std::cout << a << " + " << b << " = " << (a + b) << "\n";
    std::cout << a << " - " << b << " = " << (a - b) << "\n";
    std::cout << a << " * " << b << " = " << (a * b) << "\n";
    std::cout << a << " / " << b << " = " << (a / b) << "  (целочисленное деление)\n";
    std::cout << a << " % " << b << " = " << (a % b) << "  (остаток от деления)\n";

    // Копии исходных значений для демонстрации составного присваивания
    int a_copy = a;
    int b_copy = b;

    std::cout << "\n--- Составное присваивание (на копиях a_copy и b_copy) ---\n";

    a_copy += b_copy;
    std::cout << "После a_copy += b_copy: a_copy = " << a_copy << "\n";

    a_copy -= b_copy;          // теперь a_copy снова равен исходному a
    std::cout << "После a_copy -= b_copy: a_copy = " << a_copy << "\n";

    a_copy *= b_copy;
    std::cout << "После a_copy *= b_copy: a_copy = " << a_copy << "\n";

    a_copy /= b_copy;          // восстанавливаем примерно исходное значение (целочисленно)
    std::cout << "После a_copy /= b_copy: a_copy = " << a_copy << "\n";

    a_copy %= b_copy;
    std::cout << "После a_copy %= b_copy: a_copy = " << a_copy << "\n";

    return 0;
}

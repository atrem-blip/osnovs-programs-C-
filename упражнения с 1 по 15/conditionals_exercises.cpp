// ============================================================================
// conditionals_exercises.cpp
// Упражнения 1-15: условные операторы, switch, тернарный оператор,
// логические операторы, сравнение double, static_cast.
// Сборка:  g++ -std=c++17 -Wall -o exercises conditionals_exercises.cpp
// ============================================================================

#include <iostream>
#include <string>
#include <cmath>     // std::fabs
#include <cctype>    // std::tolower, std::isalpha

int main() {
    std::cout << "=== Упражнение 1: положительное / отрицательное / ноль ===\n";
    {
        int n;
        std::cout << "Введите целое число: ";
        std::cin >> n;
        if (n > 0)
            std::cout << "Положительное\n";
        else if (n < 0)
            std::cout << "Отрицательное\n";
        else
            std::cout << "Ноль\n";
    }

    std::cout << "\n=== Упражнение 2: большее из двух (тернарный и if-else) ===\n";
    {
        double a, b;
        std::cout << "Введите два числа a и b: ";
        std::cin >> a >> b;

        // (а) тернарный оператор
        std::string viaTernary = (a > b) ? "больше a" : (b > a) ? "больше b" : "равны";
        std::cout << "Тернарный: " << viaTernary << "\n";

        // (б) if-else
        if (a > b)
            std::cout << "if-else: больше a\n";
        else if (b > a)
            std::cout << "if-else: больше b\n";
        else
            std::cout << "if-else: равны\n";
    }

    std::cout << "\n=== Упражнение 3: чётное / нечётное ===\n";
    {
        int n;
        std::cout << "Введите число: ";
        std::cin >> n;
        // n % 2 == 0 работает и для отрицательных: -7 % 2 == -1, но != 0
        if (n % 2 == 0)
            std::cout << "Чётное\n";
        else
            std::cout << "Нечётное\n";
    }

    std::cout << "\n=== Упражнение 4: оценка по баллам ===\n";
    {
        int score;
        std::cout << "Введите баллы (0-100): ";
        std::cin >> score;
        if (score >= 90)
            std::cout << "Оценка: A\n";
        else if (score >= 80)
            std::cout << "Оценка: B\n";
        else if (score >= 70)
            std::cout << "Оценка: C\n";
        else if (score >= 60)
            std::cout << "Оценка: D\n";
        else
            std::cout << "Оценка: F\n";
    }

    std::cout << "\n=== Упражнение 5: название месяца (switch) ===\n";
    {
        int m;
        std::cout << "Введите номер месяца (1-12): ";
        std::cin >> m;
        switch (m) {
            case 1:  std::cout << "Январь\n";   break;
            case 2:  std::cout << "Февраль\n";  break;
            case 3:  std::cout << "Март\n";     break;
            case 4:  std::cout << "Апрель\n";   break;
            case 5:  std::cout << "Май\n";      break;
            case 6:  std::cout << "Июнь\n";     break;
            case 7:  std::cout << "Июль\n";     break;
            case 8:  std::cout << "Август\n";   break;
            case 9:  std::cout << "Сентябрь\n"; break;
            case 10: std::cout << "Октябрь\n";  break;
            case 11: std::cout << "Ноябрь\n";   break;
            case 12: std::cout << "Декабрь\n";  break;
            default: std::cout << "Некорректный номер месяца\n"; break;
        }
    }

    std::cout << "\n=== Упражнение 6: гласная / согласная / не буква (switch) ===\n";
    {
        char ch;
        std::cout << "Введите один символ: ";
        std::cin >> ch;

        if (!std::isalpha(static_cast<unsigned char>(ch))) {
            std::cout << "Не буква\n";
        } else {
            switch (std::tolower(static_cast<unsigned char>(ch))) {
                // проваливание (fallthrough): все гласные дают один и тот же вывод
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    std::cout << "Гласная\n";
                    break;
                // все остальные буквы (латиница) — согласные
                default:
                    std::cout << "Согласная\n";
                    break;
            }
        }
    }

    std::cout << "\n=== Упражнение 7: високосный год ===\n";
    {
        int year;
        std::cout << "Введите год: ";
        std::cin >> year;
        // делится на 4, но не на 100, ИЛИ делится на 400
        bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        std::cout << year << (leap ? " — високосный\n" : " — не високосный\n");
    }

    std::cout << "\n=== Упражнение 8: максимум из трёх (два способа) ===\n";
    {
        double a, b, c;
        std::cout << "Введите три числа: ";
        std::cin >> a >> b >> c;

        // (а) вложенные if-else
        double maxIf;
        if (a >= b) {
            maxIf = (a >= c) ? a : c;   // простая операция внутри, можно и if
        } else {
            maxIf = (b >= c) ? b : c;
        }
        std::cout << "Максимум (if-else): " << maxIf << "\n";

        // (б) вложенные тернарные операторы
        double maxTernary = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
        std::cout << "Максимум (тернарный): " << maxTernary << "\n";
    }

    std::cout << "\n=== Упражнение 9: делится ли a на b (короткое замыкание) ===\n";
    {
        int a, b;
        std::cout << "Введите целые a и b: ";
        std::cin >> a >> b;

        // Короткое замыкание: если b == 0, правая часть (a % b) НЕ вычисляется,
        // поэтому деление на ноль невозможно.
        bool divisible = (b != 0) && (a % b == 0);

        if (b == 0)
            std::cout << "Деление на ноль: деление невозможно\n";
        else
            std::cout << a << (divisible ? " делится нацело на " : " НЕ делится нацело на ")
                      << b << "\n";
    }

    std::cout << "\n=== Упражнение 10: сравнение double с допуском ===\n";
    {
        double a, b;
        std::cout << "Введите два double: ";
        std::cin >> a >> b;

        if (std::fabs(a - b) < 1e-9)
            std::cout << "Числа равны (в пределах 1e-9)\n";
        else if (a > b)
            std::cout << "Первое больше\n";
        else
            std::cout << "Второе больше\n";
    }

    std::cout << "\n=== Упражнение 11: рабочий день или выходной (switch) ===\n";
    {
        int day;
        std::cout << "Введите номер дня недели (1-7): ";
        std::cin >> day;
        switch (day) {
            // проваливание: case 1..5 падают в общий вывод без break
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                std::cout << "Рабочий день\n";
                break;
            case 6:
            case 7:
                std::cout << "Выходной\n";
                break;
            default:
                std::cout << "Некорректный номер дня\n";
                break;
        }
    }

    std::cout << "\n=== Упражнение 12: калькулятор через switch ===\n";
    {
        char op;
        double a, b;
        std::cout << "Введите операцию (+ - * /) и два числа: ";
        std::cin >> op >> a >> b;

        switch (op) {
            case '+':
                std::cout << a << " + " << b << " = " << (a + b) << "\n";
                break;
            case '-':
                std::cout << a << " - " << b << " = " << (a - b) << "\n";
                break;
            case '*':
                std::cout << a << " * " << b << " = " << (a * b) << "\n";
                break;
            case '/':
                // сравнение с нулём через допуск, а не через ==
                if (std::fabs(b) < 1e-9)
                    std::cout << "Деление на ноль невозможно\n";
                else
                    std::cout << a << " / " << b << " = " << (a / b) << "\n";
                break;
            default:
                std::cout << "Некорректная операция\n";
                break;
        }
    }

    std::cout << "\n=== Упражнение 13: скидка (&& и || со скобками) ===\n";
    {
        int age, student;
        std::cout << "Введите возраст и наличие студенческого билета (1/0): ";
        std::cin >> age >> student;

        bool studentFlag = (student == 1);
        // скидка: возраст >= 65 ИЛИ (студент И возраст < 25)
        bool discount = (age >= 65) || (studentFlag && age < 25);

        std::cout << (discount ? "Скидка положена\n" : "Скидка не положена\n");
    }

    std::cout << "\n=== Упражнение 14: знак и чётность одним тернарным оператором ===\n";
    {
        int x;
        std::cout << "Введите целое число: ";
        std::cin >> x;

        if (x == 0) {
            std::cout << "ноль\n";
        } else {
            // один тернарный оператор с вложенными тернарными
            std::cout << ((x > 0)
                              ? (x % 2 == 0 ? "положительное чётное" : "положительное нечётное")
                              : (x % 2 == 0 ? "отрицательное чётное" : "отрицательное нечётное"))
                      << "\n";
        }
    }

    std::cout << "\n=== Упражнение 15: int vs unsigned int ===\n";
    {
        int x;
        unsigned int y;
        std::cout << "Введите int x и unsigned int y: ";
        std::cin >> x >> y;

        bool naive = (x < y);  // потенциально опасное сравнение
        bool correct = (static_cast<long long>(x) < static_cast<long long>(y));

        std::cout << "Наивное сравнение x < y : " << (naive ? "true" : "false") << "\n";
        std::cout << "Корректное сравнение    : " << (correct ? "true" : "false") << "\n";

        // Почему результаты могут отличаться, например при x = -1, y = 1:
        // когда int сравнивается с unsigned int, int неявно приводится к unsigned.
        // При этом -1 превращается в 4294967295 (для 32-битного unsigned int),
        // потому что битовое представление -1 (все единицы) читается как
        // максимальное беззнаковое значение. Поэтому наивное x < y даёт
        // 4294967295 < 1, то есть false, хотя математически -1 < 1 — true.
        // Приведение обоих операндов к long long (знаковому 64-битному типу)
        // устраняет эту проблему: static_cast<long long>(-1) = -1,
        // static_cast<long long>(1u) = 1, и сравнение даёт верный true.
        // Компилятор с флагом -Wall предупреждает о таких сравнениях:
        // "comparison of integer expressions of different signedness".
        if (naive != correct)
            std::cout << "Результаты отличаются (см. комментарий в коде)!\n";
    }

    std::cout << "\nВсе упражнения выполнены.\n";
    return 0;
}

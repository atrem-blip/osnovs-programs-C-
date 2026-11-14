# include <iostream>
# include <iomanip>

int main() {
    // ---------- 1. Ввод и валидация ----------
    int n;
    std::cout << "Введите количество чисел N (1..100): ";
    if (!(std::cin >> n)) {                      // защита от ввода букв
        std::cout << "Ошибка: введено не целое число.\n";
        return 1;
    }
    if (n <= 0 || n > 100) {                     // тест 3: N = 0 -> ошибка
        std::cout << "Ошибка: N должно быть в диапазоне от 1 до 100.\n";
        return 1;
    }

    // ---------- 2. Сбор статистики в одном проходе ----------
    int positives = 0, negatives = 0, zeros = 0;
    int even = 0, odd = 0;
    long long sum = 0;                           // long long: не переполнится
    int mn = 0, mx = 0;
    int prev = 0;
    bool ascending = true;                       // строго по возрастанию
    bool adjacentRepeat = false;                 // два одинаковых числа подряд

    for (int i = 0; i < n; ++i) {
        int x;
        std::cout << "Число " << (i + 1) << ": ";
        if (!(std::cin >> x)) {
            std::cout << "Ошибка: введено не целое число.\n";
            return 1;
        }

        if (i == 0) {
            mn = mx = x;                         // инициализация первым числом
        } else {
            if (x < mn) mn = x;
            if (x > mx) mx = x;
            if (x <= prev) ascending = false;    // 3 3 4 -> уже не "да"
            if (x == prev) adjacentRepeat = true;
        }
        prev = x;

        sum += x;
        if (x > 0) ++positives;
        else if (x < 0) ++negatives;
        else ++zeros;

        if (x % 2 == 0) ++even;                  // работает и для отрицательных
        else ++odd;
    }

    // ---------- 3. Дополнительный анализ ----------
    double average = static_cast<double>(sum) / n;
    bool sumIsEven = (sum % 2 == 0);

    // ---------- 4. Отчёт ----------
    std::cout << "\n===== ОТЧЁТ =====\n";
    std::cout << "Введено чисел: " << n << "\n";
    std::cout << "Положительных: " << positives << "\n";
    std::cout << "Отрицательных: " << negatives << "\n";
    std::cout << "Нулей: " << zeros << "\n";
    std::cout << "Чётных: " << even << "\n";
    std::cout << "Нечётных: " << odd << "\n";
    std::cout << "Сумма: " << sum << "\n";
    std::cout << "Минимум: " << mn << "\n";
    std::cout << "Максимум: " << mx << "\n";
    std::cout << "Среднее: " << std::setprecision(2) << average << "\n";
    std::cout << "Сумма чётная: " << (sumIsEven ? "да" : "нет") << "\n";
    std::cout << "По возрастанию: " << (ascending ? "да" : "нет") << "\n";
    std::cout << "Есть повтор подряд: " << (adjacentRepeat ? "да" : "нет") << "\n";
    std::cout << "=================\n";

    return 0;
}

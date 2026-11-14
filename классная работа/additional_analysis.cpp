#include <iostream>
#include <iomanip> // Необходимо для std::setprecision
#include <limits>  // Необходимо для std::numeric_limits

int main() 
{
    // ---------- 1. Ввод и валидация ----------
    int n;
    std::cout << "Введите количество чисел N (1..100): ";
    if (!(std::cin >> n)) {
        std::cout << "Ошибка: введено не целое число.\n";
        return 1;
    }
    if (n <= 0 || n > 100) {
        std::cout << "Ошибка: N должно быть в диапазоне от 1 до 100.\n";
        return 1;
    }

    // ---------- 2. Сбор статистики в одном проходе ----------
    long long sum = 0;
    int prev = 0;
    bool ascending = (n != 1); // Для одного элемента вывод будет "нет", чтобы не путать пользователя
    bool adjacentRepeat = false;

    for (int i = 0; i < n; ++i) {
        int x;
        std::cout << "Число " << (i + 1) << ": ";
        if (!(std::cin >> x)) {
            std::cout << "Ошибка: введено не целое число.\n";
            // Сброс состояния потока ввода (на случай, если продолжим работу)
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return 1;
        }

        if (i > 0) {
            if (x <= prev) ascending = false; 
            if (x == prev) adjacentRepeat = true;
        }
        prev = x;
        sum += x;
    }

    // ---------- 3. Дополнительный анализ ----------
    double average = static_cast<double>(sum) / n;
    bool sum_is_even = (sum % 2 == 0);

    std::cout << "\n===== АНАЛИЗ =====\n";
    std::cout << "Сумма: " << sum << "\n";
    // std::fixed зафиксирует количество знаков после запятой, иначе setprecision может работать в научном формате
    std::cout << "Среднее: " << std::fixed << std::setprecision(2) << average << "\n";
    std::cout << "Сумма чётная: " << (sum_is_even ? "да" : "нет") << "\n";
    std::cout << "По возрастанию: " << (ascending ? "да" : "нет") << "\n";
    std::cout << "Есть повтор подряд: " << (adjacentRepeat ? "да" : "нет") << "\n";
    std::cout << "==================\n";

    return 0;
}

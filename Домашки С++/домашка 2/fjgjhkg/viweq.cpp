#include <iostream>
using namespace std;

int main() {
    int x;
    unsigned int y;

    cout << "Введите x (int) и y (unsigned int): ";
    cin >> x >> y;

    // --- Наивное сравнение (НЕПРАВИЛЬНО при отрицательных x) ---
    bool naive = x < y;
    // Если x = -1, то при сравнении оно неявно станет очень большим unsigned,
    // и условие x < y скорее всего станет false, хотя по смыслу -1 < 1.

    // --- Корректное сравнение через приведение к long long ---
    // Приводим оба операнда к знаковому типу большей разрядности, чтобы сохранить знак x.
    bool correct = static_cast<long long>(x) < static_cast<long long>(y);

    cout << "Наивное сравнение (x < y): " << (naive ? "true" : "false") << endl;
    cout << "Корректное сравнение (приведено к long long): " 
         << (correct ? "true" : "false") << endl;

    return 0;
}
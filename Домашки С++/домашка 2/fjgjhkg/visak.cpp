#include <iostream>
#include <cmath>   // для std::fabs

using namespace std;

int main() {
    char op;
    double a, b;

    cout << "Введите операцию (+ - * /): ";
    cin >> op;
    cout << "Введите два числа: ";
    cin >> a >> b;

    const double EPS = 1e-9;

    switch (op) {
        case '+':
            cout << "Результат: " << (a + b) << endl;
            break;

        case '-':
            cout << "Результат: " << (a - b) << endl;
            break;

        case '*':
            cout << "Результат: " << (a * b) << endl;
            break;

        case '/':
            if (fabs(b) < EPS) {
                cout << "Ошибка: деление на ноль (или число слишком близко к нулю)." << endl;
            } else {
                cout << "Результат: " << (a / b) << endl;
            }
            break;

        default:
            cout << "Некорректная операция. Допустимы: +, -, *, /" << endl;
            break;
    }

    return 0;
}

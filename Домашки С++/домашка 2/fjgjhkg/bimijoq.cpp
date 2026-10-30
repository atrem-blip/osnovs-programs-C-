#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введите a и b (целые числа): ";
    cin >> a >> b;

    if (b != 0 && a % b == 0) {
        cout << a << " делится на " << b << " нацело." << endl;
    } else if (b == 0) {
        cout << "Ошибка: деление на ноль невозможно." << endl;
    } else {
        cout << a << " не делится на " << b << " нацело." << endl;
    }

    return 0;
}

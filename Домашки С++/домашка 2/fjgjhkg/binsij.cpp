#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите целое число: ";
    cin >> n;

    if (n == 0) {
        cout << "ноль" << endl;
    } else {
        // Вложенные тернарные для 4 случаев
        const char* result = (n > 0)
            ? ((n % 2 == 0) ? "положительное чётное" : "положительное нечётное")
            : ((n % 2 == 0) ? "отрицательное чётное" : "отрицательное нечётное");

        cout << result << endl;
    }

    return 0;
}
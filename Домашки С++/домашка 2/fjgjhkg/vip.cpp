#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Введите номер дня недели (1–7): ";
    cin >> day;

    switch (day) {
        // Дни 1–5: понедельник–пятница — рабочие
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Рабочий день" << endl;
            break;

        // Дни 6–7: суббота–воскресенье — выходные
        case 6:
        case 7:
            cout << "Выходной" << endl;
            break;

        default:
            cout << "Некорректный номер дня. Введите число от 1 до 7." << endl;
            break;
    }

    return 0;
}

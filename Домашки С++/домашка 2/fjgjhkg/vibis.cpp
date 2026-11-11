#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Введите один символ: ";
    cin >> ch;

    // Сначала проверим, буква ли это вообще (A–Z, a–z)
    bool isLetter = (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');

    if (!isLetter) {
        cout << "Не буква" << endl;
        return 0;
    }

    switch (ch) {
        // Гласные в нижнем регистре
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            // Проваливание: без break переходим дальше
        // Гласные в верхнем регистре — тоже проваливаются
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Гласная" << endl;
            break;

        // Остальные буквы — согласные
        default:
            cout << "Согласная" << endl;
            break;
    }

    return 0;
}

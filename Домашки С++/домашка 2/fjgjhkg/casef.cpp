#include <iostream>
using namespace std;

int main() {
    int age, hasStudentCard;

    cout << "Введите возраст: ";
    cin >> age;
    cout << "Есть студенческий билет? (1 — да, 0 — нет): ";
    cin >> hasStudentCard;

    // Скидка: возраст ≥ 65 ИЛИ (студент И возраст < 25)
    bool isDiscount = (age >= 65) || ((hasStudentCard == 1) && (age < 25));

    if (isDiscount) {
        cout << "Скидка положена." << endl;
    } else {
        cout << "Скидка не положена." << endl;
    }

    return 0;
}
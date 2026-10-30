#include <iostream>
#include <cmath>   // для std::fabs

using namespace std;

int main() {
    double a, b;
    cout << "Введите два числа (double): ";
    cin >> a >> b;

    const double EPS = 1e-9;

    if (fabs(a - b) < EPS) {
        cout << "Равны" << endl;
    } else if (a > b) {
        cout << "Первое число больше" << endl;
    } else {
        cout << "Второе число больше" << endl;
    }

    return 0;
}

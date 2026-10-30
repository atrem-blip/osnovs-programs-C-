#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;

    int maximum = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);

    cout << "Максимум: " << maximum << endl;
    return 0;
}

#include <iostream>

int main() {
    const int SIZE = 5;

    for (int i = 0; i < SIZE; ++i) {      // строки
        for (int j = 0; j < SIZE; ++j) {  // столбцы
            std::cout << "# ";
        }
        std::cout << "\n";
    }
    return 0;
}

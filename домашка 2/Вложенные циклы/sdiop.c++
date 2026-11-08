#include <iostream>

int main() {
    for (int i = 5; i >= 1; --i) {        // 5 строк, от 5 звёзд к 1
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}

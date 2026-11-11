#include <iostream>

int main() {
    // --- Часть 1: int -> char (неявное сужение, возможна потеря данных) ---
    int big = 300;
    char small = big;  // неявное преобразование: char обычно 1 байт (0–255 или -128–127)

    std::cout << "=== int -> char (сужение) ===\n";
    std::cout << "big (int)      = " << big << "\n";
    // static_cast<int> нужен, чтобы вывести код символа, а не сам символ
    std::cout << "small (как код) = " << static_cast<int>(small) << "\n";
    std::cout << "sizeof(big)    = " << sizeof(big) << " байт\n";
    std::cout << "sizeof(small)  = " << sizeof(small) << " байт\n";

    // --- Часть 2: double -> int (неявное сужение, дробная часть отбрасывается) ---
    double d = 3.99;
    int i = d;  // неявное преобразование: дробная часть просто отбрасывается (не округляется!)

    std::cout << "\n=== double -> int (сужение) ===\n";
    std::cout << "d (double) = " << d << "\n";
    std::cout << "i (int)    = " << i << "\n";

    return 0;
}

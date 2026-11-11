#include <iostream>
#include <iomanip>  // для удобства форматирования, если понадобится

int main() {
    // Объявление и инициализация переменных всех фундаментальных типов
    int intVal = 42;
    short shortVal = 300;
    long long longLongVal = 9223372036854775807LL;
    unsigned int uintVal = 1000u;
    float floatVal = 3.14f;
    double doubleVal = 2.718281828459045;
    char charVal = 'A';
    bool boolVal = true;

    // Вывод значений и размеров
    std::cout << "int:          value = " << intVal 
              << ", size = " << sizeof(intVal) << " bytes\n";

    std::cout << "short:        value = " << shortVal 
              << ", size = " << sizeof(shortVal) << " bytes\n";

    std::cout << "long long:    value = " << longLongVal 
              << ", size = " << sizeof(longLongVal) << " bytes\n";

    std::cout << "unsigned int: value = " << uintVal 
              << ", size = " << sizeof(uintVal) << " bytes\n";

    std::cout << "float:        value = " << floatVal 
              << ", size = " << sizeof(floatVal) << " bytes\n";

    std::cout << "double:       value = " << doubleVal 
              << ", size = " << sizeof(doubleVal) << " bytes\n";

    std::cout << "char:         value = '" << charVal 
              << "', size = " << sizeof(charVal) << " bytes\n";

    // Для bool используем std::boolalpha, чтобы выводить true/false вместо 1/0
    std::cout << std::boolalpha;
    std::cout << "bool:         value = " << boolVal 
              << ", size = " << sizeof(boolVal) << " bytes\n";

    return 0;
}

#include <iostream>

int main()
{
    // ---- Шаг 2: переменные заказа ----
    // ticketPrice    — цена одного билета, int, начальное значение 350
    // ticketCount    — количество билетов в заказе, int, начальное значение 2
    // serviceFee     — сервисный сбор за весь заказ, int, начальное значение 50
    // issuedTickets  — счётчик выданных билетов, пустые {} задают значение 0
    int ticketPrice = 350;
    int ticketCount = 2;
    int serviceFee = 50;
    int issuedTickets{ };

    // ---- Шаг 3: данные участника ----
    std::cout << "IT MEETUP\n";
    std::cout << "Participant: Ivan Petrov\n";
    std::cout << "Group: IS-231\n";

    // ---- Шаг 4: название события и путь ----
    // \" выводит кавычку, \\ — одну обратную косую черту,
    // \n\n после пути создаёт одну пустую строку
    std::cout << "Event: \"Code Meetup\"\n";
    std::cout << "Folder: C:\\Study\\cpp-start\n\n";

    // ---- Шаг 5: расчёт стоимости заказа ----
    // Сначала умножаем цену на количество билетов, затем прибавляем
    // сервисный сбор (он берётся один раз за весь заказ).
    int total = ticketPrice * ticketCount + serviceFee;

    std::cout << "Price: " << ticketPrice << " RUB\n";
    std::cout << "Tickets: " << ticketCount << "\n";
    std::cout << "Service fee: " << serviceFee << " RUB\n";
    std::cout << "Total: " << total << " RUB\n";

    // ---- Шаг 6: отметка выдачи билетов ----
    std::cout << "Issued before: " << issuedTickets << "\n";

    // Присваивание: счётчик получает значение переменной ticketCount
    issuedTickets = ticketCount;

    std::cout << "Issued after: " << issuedTickets << "\n";

    return 0;
}

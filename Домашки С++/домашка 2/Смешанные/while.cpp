#include <iostream>
#include <cstdlib>  // std::rand, std::srand
#include <ctime>    // std::time

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr))); // зерно от времени

    char playAgain = 'y';

    do { // раунд
        int secret = std::rand() % 100 + 1; // число от 1 до 100
        int guess = 0;
        int attempts = 0;

        std::cout << "\nЯ загадал число от 1 до 100. Угадайте! (-1 — выход)\n";

        while (true) {
            std::cout << "Ваша догадка: ";
            std::cin >> guess;

            // Проверка ввода: пока пользователь вводит не число — просим заново
            if (std::cin.fail()) {
                std::cin.clear();                                        // сбрасываем ошибку
                std::cin.ignore(10000, '\n');                            // чистим буфер
                std::cout << "Это не число. Попробуйте ещё раз.\n";
                continue;
            }

            if (guess == -1) {
                std::cout << "Выход из раунда. Загаданное число: " << secret << "\n";
                break;
            }

            if (guess < 1 || guess > 100) {
                std::cout << "Число должно быть от 1 до 100!\n";
                continue;
            }

            ++attempts;

            if (guess < secret) {
                std::cout << "Больше!\n";
            } else if (guess > secret) {
                std::cout << "Меньше!\n";
            } else {
                std::cout << "Угадали! Число " << secret
                          << " за " << attempts << " попыток.\n";
                break;
            }
        }

        std::cout << "Сыграть ещё? (y/n): ";
        std::cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Спасибо за игру!\n";
    return 0;
}

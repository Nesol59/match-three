#include <windows.h>
#include <ctime>
#include <iostream>
#include <vector>
#include "Matrix_Header2.h"
#include "Management_Header.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::srand(std::time(nullptr));
    std::vector<std::vector<char>> board(8, std::vector<char>(8));

    setlocale(LC_ALL,"RU");
    int score = 0;
    bool flag_tmp = 1;
    while (flag_tmp == 1) {
        std::cout << "Приветствуем вас в нашей игре!" << std::endl << "Цель игры - набрать как можно больше очков" << std::endl;
        std::cout << "Вы получаете очки каждый раз когда на доске оказывается 3 или более одинаковых элементов в ряд" << std::endl;
        std::cout << "Очки не сбрасываются до выхода из программы" << std::endl;
        std::cout << "Выберите нужное действие с помощью ввода в консоль номера пункта" << std::endl;
        std::cout << "1 - Начать игру" << std::endl;
        std::cout << "2 - Текущее количество очков" << std::endl;
        std::cout << "3 - Кнопка для вывода котика <3" << std::endl;
        std::cout << "0 - Выйти из игры" << std::endl;
        std::cout << "===============================" << std::endl;
        std::cout << "Ваш выбор:";
        int choice;
        std::cin >> choice;
        switch (choice) {
            case 1:
                Generate_Board(board);
                Clear_Board(board);
                Start_Game(board, score);
                break;
            case 2:
                std::cout << "Сейчас у вас " << score << " очков.\n\n";
                break;
            case 3:
                MurMiau();
                break;
            case 0:
                flag_tmp=0;
                break;
            default:
                std::cout << "Неверный ввод!" << std::endl;
        }
    }
}
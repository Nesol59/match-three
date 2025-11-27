#include <windows.h>
#include <ctime>
#include <iostream>
#include <vector>
#include "Matrix_Header2.h"
#include "Management_Header.h"

int main() {
    std::srand(std::time(nullptr));
    std::vector<std::vector<char>> board(8, std::vector<char>(8));

    bool gen = 1;
    Generate_Board(board);
    Show_Board(board);
    std::cout << std::endl;
    win_comb(board);
    Show_Board(board);
    std::cout << std::endl << number_of_winning_cells(board) << std::endl;
    generation_of_new_cells(board,gen);
    Show_Board(board);

}
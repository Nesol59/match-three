#pragma once
#include <vector>

int number_of_winning_cells(std::vector<std::vector<char>> board);
void generation_of_new_cells(std::vector<std::vector<char>>& board, bool& gen);
void win_comb(std::vector<std::vector<char>>& board);
void Start_Game(std::vector<std::vector<char>>& board, int& total_score);
void Clear_Board(std::vector<std::vector<char>>& board);
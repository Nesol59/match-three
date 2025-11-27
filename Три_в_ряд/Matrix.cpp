#include <windows.h>
#include <ctime>
#include <iostream>
#include <vector>

#include "Management_Header.h"

std::vector<char> symbols = {'X', 'O', '#'};

// ставит цвет
void SetColor(int colorCode) {
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, colorCode);
}
// функция для сброса цвета текста
void ResetColor() {
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(
      hConsole, 7);  // делает белый цвет по дефолту, что другое не было цветным
}

// функция для вывода цветных символов
void PrintColoredSymbol(char symbol) {
  switch (symbol) {
    case 'X':
      SetColor(14);  // желтый
      break;
    case 'O':
      SetColor(12);  // красный
      break;
    case '#':
      SetColor(10);  // зеленый
      break;
    default:
      SetColor(7);  // белый для других символов
      break;
  }
  std::cout << symbol;
  ResetColor();
}

void Generate_Board(std::vector<std::vector<char>>& board) {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      int idx = rand() % 3;
      board[i][j] = symbols[idx];
    }
  }
}
// просто вывод c небольшим дизайном
void Show_Board(std::vector<std::vector<char>> board) {
  std::cout << "=== ТРИ В РЯД ===" << '\n';
  std::cout << "Счет: пока нет" << '\n' << '\n' << "     ";  // потом добавим
  for (int i = 1; i < 9; i++) {
    std::cout << i << "  ";
  }
  std::cout << '\n' << "   ";
  for (int i = 0; i < 13; i++) {
    std::cout << "--";
  }
  std::cout << '\n';
  for (int i = 0; i < 8; i++) {
    std::cout << i + 1 << " " << '|' << "  ";
    for (int j = 0; j < 8; j++) {
      PrintColoredSymbol(board[i][j]);
      std::cout << "  ";
    }
    std::cout << '|';
    std::cout << '\n';
  }
  std::cout << "   ";
  for (int i = 0; i < 13; i++) {
    std::cout << "--";
  }
}
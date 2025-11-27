#include <vector>
#include "Management_Header.h"

void win_comb(std::vector<std::vector<char>>& board) {
    for (int i = 0; i<8;i++) {
        for (int j = 0; j<8;j++) {
            if (j>1){
                if ( (board[i][j]=='X' || board[i][j]=='1') && (board[i][j-1]=='X' || board[i][j-1]=='1') && (board[i][j-2]=='X' || board[i][j-2]=='1')) {
                    board[i][j]='1';
                    board[i][j-1]='1';
                    board[i][j-2]='1';
                }
                if ( (board[i][j]=='O' || board[i][j]=='2') && (board[i][j-1]=='O' || board[i][j-1]=='2') && (board[i][j-2]=='O' || board[i][j-2]=='2')) {
                    board[i][j]='2';
                    board[i][j-1]='2';
                    board[i][j-2]='2';
                }
                if ( (board[i][j]=='#' || board[i][j]=='3') && (board[i][j-1]=='#' || board[i][j-1]=='3') && (board[i][j-2]=='#' || board[i][j-2]=='3')) {
                    board[i][j]='3';
                    board[i][j-1]='3';
                    board[i][j-2]='3';
                }
            }
            if (i>1) {
                if ( (board[i][j]=='X' || board[i][j]=='1') && (board[i-1][j]=='X' || board[i-1][j]=='1') && (board[i-2][j]=='X' || board[i-2][j]=='1')) {
                    board[i][j]='1';
                    board[i-1][j]='1';
                    board[i-2][j]='1';
                }
                if ( (board[i][j]=='O' || board[i][j]=='2') && (board[i-1][j]=='O' || board[i-1][j]=='2') && (board[i-2][j]=='O' || board[i-2][j]=='2')) {
                    board[i][j]='2';
                    board[i-1][j]='2';
                    board[i-2][j]='2';
                }
                if ( (board[i][j]=='#' || board[i][j]=='3') && (board[i-1][j]=='#' || board[i-1][j]=='3') && (board[i-2][j]=='#' || board[i-2][j]=='3')) {
                    board[i][j]='3';
                    board[i-1][j]='3';
                    board[i-2][j]='3';
                }
            }
        }
    }
}


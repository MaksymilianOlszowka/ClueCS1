//
//  main.cpp
//  c++ clue board print attempt 34540
//
//  Created by Maksymilian Olszowka on 4/5/22.
//

#include <iostream>
using namespace std;

void printBoard() {
    char printBoard[26][26];
    
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            printBoard[i][j] = '.';
        }
    }
    
    for (int i = 1; i < 8; i++) {
        for (int j = 1; j < 8; j++) {
            printBoard[i][j] = ' ';
        }
    }
    
    for (int i = 1; i < 8; i++) {
        for (int j = 9; j < 17; j++) {
            printBoard[i][j] = ' ';
        }
    }
    
    for (int i = 1; i < 8; i++) {
        for (int j = 18; j < 25; j++) {
            printBoard[i][j] = ' ';
        }
    }
    
    for (int i = 9; i < 17; i++) {
        for (int j = 1; j < 8; j++) {
            printBoard[i][j] = ' ';
        }
    }
    
    for (int i = 9; i < 17; i++) {
        for (int j = 10; j < 16; j++) {
            printBoard[i][j] = ' ';
        }
    }
    
    for (int i = 9; i < 12; i++) {
        for (int j = 18; j < 25; j++) {
            printBoard[i][j] = ' ';
        }
    }
    
    for (int i = 13; i < 17; i++) {
        for (int j = 18; j < 25; j++) {
            printBoard[i][j] = ' ';
        }
    }
    
    for (int i = 18; i < 25; i++) {
        for (int j = 1; j < 8; j++) {
            printBoard[i][j] = ' ';
        }
    }
    
    for (int i = 18; i < 25; i++) {
        for (int j = 9; j < 17; j++) {
            printBoard[i][j] = ' ';
        }
    }
    
    for (int i = 18; i < 25; i++) {
        for (int j = 18; j < 25; j++) {
            printBoard[i][j] = ' ';
        }
    }
    
    
    printBoard[2][2] = 'K';
    printBoard[2][3] = 't';
    printBoard[2][4] = 'c';
    printBoard[2][5] = 'n';
    printBoard[2][11] = 'B';
    printBoard[2][12] = 'l';
    printBoard[2][13] = 'r';
    printBoard[2][14] = 'm';
    printBoard[2][20] = 'C';
    printBoard[2][21] = 'n';
    printBoard[2][22] = 'v';
    printBoard[2][23] = 't';
    printBoard[10][2] = 'D';
    printBoard[10][3] = 'n';
    printBoard[10][4] = 'g';
    printBoard[10][5] = 'R';
    printBoard[10][11] = 'C';
    printBoard[10][12] = 'l';
    printBoard[10][13] = 'r';
    printBoard[10][20] = 'B';
    printBoard[10][21] = 'l';
    printBoard[10][22] = 'd';
    printBoard[15][20] = 'L';
    printBoard[15][21] = 'i';
    printBoard[15][22] = 'b';
    printBoard[20][2] = 'L';
    printBoard[20][3] = 'o';
    printBoard[20][4] = 'u';
    printBoard[20][5] = 'n';
    printBoard[20][6] = 'g';
    printBoard[20][11] = 'H';
    printBoard[20][12] = 'a';
    printBoard[20][13] = 'l';
    printBoard[20][14] = 'l';
    printBoard[20][20] = 'S';
    printBoard[20][21] = 't';
    printBoard[20][22] = 'd';
    printBoard[20][23] = 'y';
    printBoard[0][8] = 'W';
    printBoard[0][17] = 'G';
    printBoard[8][25] = 'B';
    printBoard[17][0] = 'Y';
    printBoard[17][25] = 'P';
    printBoard[25][8] = 'R';
    printBoard[5][9] = '/';
    printBoard[5][16] = '/';
    printBoard[7][10] = '/';
    printBoard[7][15] = '/';
    printBoard[7][6] = '/';
    printBoard[7][19] = '/';
    printBoard[11][7] = '/';
    printBoard[10][18] = '/';
    printBoard[11][23] = '/';
    printBoard[16][6] = '/';
    printBoard[18][5] = '/';
    printBoard[18][12] = '/';
    printBoard[18][13] = '/';
    printBoard[15][18] = '/';
    printBoard[13][21] = '/';
    printBoard[18][19] = '/';
    
    
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            cout << printBoard[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    
    printBoard();
    
    return 0;
}

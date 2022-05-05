//
//  main.cpp
//  c++ clue board print attempt 34540
//
//  Created by Maksymilian Olszowka on 4/5/22.
//

#include <iostream>
using namespace std;

class Player {
public:
    void SetPlayerLocation(int h, int v) {
        horizontal = h;
        vertical = v;
    }
    int GetHorizontalLocation() {
        return horizontal;
    }
    int GetVerticalLocation() {
        return vertical;
    }
private:
    int horizontal;
    int vertical;
};

void printBoard() {
    
}

int main() {
    
    Player white;
    Player green;
    Player blue;
    Player purple;
    Player red;
    Player yellow;
    
    white.SetPlayerLocation(0, 8);
    green.SetPlayerLocation(0, 17);
    blue.SetPlayerLocation(8, 25);
    purple.SetPlayerLocation(17, 25);
    red.SetPlayerLocation(25, 8);
    yellow.SetPlayerLocation(17, 0);
    
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
    printBoard[white.GetHorizontalLocation()][white.GetVerticalLocation()] = 'W';
    printBoard[green.GetHorizontalLocation()][green.GetVerticalLocation()] = 'G';
    printBoard[blue.GetHorizontalLocation()][blue.GetVerticalLocation()] = 'B';
    printBoard[yellow.GetHorizontalLocation()][yellow.GetVerticalLocation()] = 'Y';
    printBoard[purple.GetHorizontalLocation()][purple.GetVerticalLocation()] = 'P';
    printBoard[red.GetHorizontalLocation()][red.GetVerticalLocation()] = 'R';
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
    
    int moveChoice = 0;
    
    for (int currPlayer = 1; currPlayer <= 6; ++currPlayer) {
        for (int amountMoves = 4; amountMoves >= 1; amountMoves--) {
            
            cout << "You have " << amountMoves << " moves remaining.\n\nWhere would you like to move?\n\n\t1. Right\n\t2. Left\n\t3. Up\n\t4. Down\n\nEnter choice here: ";
            cin >> moveChoice;
            if (currPlayer == 1) {
                if (moveChoice == 1) {
                    printBoard[white.GetHorizontalLocation()][white.GetVerticalLocation()] = '.';
                    white.SetPlayerLocation(white.GetHorizontalLocation(), white.GetVerticalLocation() + 1);
                    printBoard[white.GetHorizontalLocation()][white.GetVerticalLocation()] = 'W';
                }
                if (moveChoice == 2) {
                    printBoard[white.GetHorizontalLocation()][white.GetVerticalLocation()] = '.';
                    white.SetPlayerLocation(white.GetHorizontalLocation(), white.GetVerticalLocation() - 1);
                    printBoard[white.GetHorizontalLocation()][white.GetVerticalLocation()] = 'W';
                }
                if (moveChoice == 3) {
                    printBoard[white.GetHorizontalLocation()][white.GetVerticalLocation()] = '.';
                    white.SetPlayerLocation(white.GetHorizontalLocation() - 1, white.GetVerticalLocation());
                    printBoard[white.GetHorizontalLocation()][white.GetVerticalLocation()] = 'W';
                }
                if (moveChoice == 4) {
                    printBoard[white.GetHorizontalLocation()][white.GetVerticalLocation()] = '.';
                    white.SetPlayerLocation(white.GetHorizontalLocation() + 1, white.GetVerticalLocation());
                    printBoard[white.GetHorizontalLocation()][white.GetVerticalLocation()] = 'W';
                }
            }
            if (currPlayer == 2) {
                if (moveChoice == 1) {
                    printBoard[green.GetHorizontalLocation()][green.GetVerticalLocation()] = '.';
                    green.SetPlayerLocation(green.GetHorizontalLocation(), green.GetVerticalLocation() + 1);
                    printBoard[green.GetHorizontalLocation()][green.GetVerticalLocation()] = 'G';
                }
                if (moveChoice == 2) {
                    printBoard[green.GetHorizontalLocation()][green.GetVerticalLocation()] = '.';
                    green.SetPlayerLocation(green.GetHorizontalLocation(), green.GetVerticalLocation() - 1);
                    printBoard[green.GetHorizontalLocation()][green.GetVerticalLocation()] = 'G';
                }
                if (moveChoice == 3) {
                    printBoard[green.GetHorizontalLocation()][green.GetVerticalLocation()] = '.';
                    green.SetPlayerLocation(green.GetHorizontalLocation() - 1, green.GetVerticalLocation());
                    printBoard[green.GetHorizontalLocation()][green.GetVerticalLocation()] = 'G';
                }
                if (moveChoice == 4) {
                    printBoard[green.GetHorizontalLocation()][green.GetVerticalLocation()] = '.';
                    green.SetPlayerLocation(green.GetHorizontalLocation() + 1, green.GetVerticalLocation());
                    printBoard[green.GetHorizontalLocation()][green.GetVerticalLocation()] = 'G';
                }
            }
            if (currPlayer == 3) {
                if (moveChoice == 1) {
                    printBoard[blue.GetHorizontalLocation()][blue.GetVerticalLocation()] = '.';
                    blue.SetPlayerLocation(blue.GetHorizontalLocation(), blue.GetVerticalLocation() + 1);
                    printBoard[blue.GetHorizontalLocation()][blue.GetVerticalLocation()] = 'B';
                }
                if (moveChoice == 2) {
                    printBoard[blue.GetHorizontalLocation()][blue.GetVerticalLocation()] = '.';
                    blue.SetPlayerLocation(blue.GetHorizontalLocation(), blue.GetVerticalLocation() - 1);
                    printBoard[blue.GetHorizontalLocation()][blue.GetVerticalLocation()] = 'B';
                }
                if (moveChoice == 3) {
                    printBoard[blue.GetHorizontalLocation()][blue.GetVerticalLocation()] = '.';
                    blue.SetPlayerLocation(blue.GetHorizontalLocation() - 1, blue.GetVerticalLocation());
                    printBoard[blue.GetHorizontalLocation()][blue.GetVerticalLocation()] = 'B';
                }
                if (moveChoice == 4) {
                    printBoard[blue.GetHorizontalLocation()][blue.GetVerticalLocation()] = '.';
                    blue.SetPlayerLocation(blue.GetHorizontalLocation() + 1, blue.GetVerticalLocation());
                    printBoard[blue.GetHorizontalLocation()][blue.GetVerticalLocation()] = 'B';
                }
            }
            if (currPlayer == 4) {
                if (moveChoice == 1) {
                    printBoard[purple.GetHorizontalLocation()][purple.GetVerticalLocation()] = '.';
                    purple.SetPlayerLocation(purple.GetHorizontalLocation(), purple.GetVerticalLocation() + 1);
                    printBoard[purple.GetHorizontalLocation()][purple.GetVerticalLocation()] = 'P';
                }
                if (moveChoice == 2) {
                    printBoard[purple.GetHorizontalLocation()][purple.GetVerticalLocation()] = '.';
                    purple.SetPlayerLocation(purple.GetHorizontalLocation(), purple.GetVerticalLocation() - 1);
                    printBoard[purple.GetHorizontalLocation()][purple.GetVerticalLocation()] = 'P';
                }
                if (moveChoice == 3) {
                    printBoard[purple.GetHorizontalLocation()][purple.GetVerticalLocation()] = '.';
                    purple.SetPlayerLocation(purple.GetHorizontalLocation() - 1, purple.GetVerticalLocation());
                    printBoard[purple.GetHorizontalLocation()][purple.GetVerticalLocation()] = 'P';
                }
                if (moveChoice == 4) {
                    printBoard[purple.GetHorizontalLocation()][purple.GetVerticalLocation()] = '.';
                    purple.SetPlayerLocation(purple.GetHorizontalLocation() + 1, purple.GetVerticalLocation());
                    printBoard[purple.GetHorizontalLocation()][purple.GetVerticalLocation()] = 'P';
                }
            }
            if (currPlayer == 5) {
                if (moveChoice == 1) {
                    printBoard[red.GetHorizontalLocation()][red.GetVerticalLocation()] = '.';
                    red.SetPlayerLocation(red.GetHorizontalLocation(), red.GetVerticalLocation() + 1);
                    printBoard[red.GetHorizontalLocation()][red.GetVerticalLocation()] = 'R';
                }
                if (moveChoice == 2) {
                    printBoard[red.GetHorizontalLocation()][red.GetVerticalLocation()] = '.';
                    red.SetPlayerLocation(red.GetHorizontalLocation(), red.GetVerticalLocation() - 1);
                    printBoard[red.GetHorizontalLocation()][red.GetVerticalLocation()] = 'R';
                }
                if (moveChoice == 3) {
                    printBoard[red.GetHorizontalLocation()][red.GetVerticalLocation()] = '.';
                    red.SetPlayerLocation(red.GetHorizontalLocation() - 1, red.GetVerticalLocation());
                    printBoard[red.GetHorizontalLocation()][red.GetVerticalLocation()] = 'R';
                }
                if (moveChoice == 4) {
                    printBoard[red.GetHorizontalLocation()][red.GetVerticalLocation()] = '.';
                    red.SetPlayerLocation(red.GetHorizontalLocation() + 1, red.GetVerticalLocation());
                    printBoard[red.GetHorizontalLocation()][red.GetVerticalLocation()] = 'R';
                }
            }
            if (currPlayer == 6) {
                if (moveChoice == 1) {
                    printBoard[yellow.GetHorizontalLocation()][yellow.GetVerticalLocation()] = '.';
                    yellow.SetPlayerLocation(yellow.GetHorizontalLocation(), yellow.GetVerticalLocation() + 1);
                    printBoard[yellow.GetHorizontalLocation()][yellow.GetVerticalLocation()] = 'Y';
                }
                if (moveChoice == 2) {
                    printBoard[yellow.GetHorizontalLocation()][yellow.GetVerticalLocation()] = '.';
                    yellow.SetPlayerLocation(yellow.GetHorizontalLocation(), yellow.GetVerticalLocation() - 1);
                    printBoard[yellow.GetHorizontalLocation()][yellow.GetVerticalLocation()] = 'Y';
                }
                if (moveChoice == 3) {
                    printBoard[yellow.GetHorizontalLocation()][yellow.GetVerticalLocation()] = '.';
                    yellow.SetPlayerLocation(yellow.GetHorizontalLocation() - 1, yellow.GetVerticalLocation());
                    printBoard[yellow.GetHorizontalLocation()][yellow.GetVerticalLocation()] = 'Y';
                }
                if (moveChoice == 4) {
                    printBoard[yellow.GetHorizontalLocation()][yellow.GetVerticalLocation()] = '.';
                    yellow.SetPlayerLocation(yellow.GetHorizontalLocation() + 1, yellow.GetVerticalLocation());
                    printBoard[yellow.GetHorizontalLocation()][yellow.GetVerticalLocation()] = 'Y';
                }
            }
            for (int i = 0; i < 26; i++) {
                for (int j = 0; j < 26; j++) {
                    cout << printBoard[i][j] << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}

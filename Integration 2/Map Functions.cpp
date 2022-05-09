//
//  Map Functions.cpp
//  Integration 2
//
//  Created by Maksymilian Olszowka on 5/7/22.
//

#include <iostream>
#include "Map Functions.hpp"
#include "Player.hpp"
using namespace std;

int diceRoll(void) { // Generates a random number between 1-6
    srand(static_cast<unsigned int>(time(nullptr)));
    
    int roll = (rand() % 6 + 1);
    
    return roll;
    
}

void Player::SetPlayerLocation(int v, int h) {
    vertical = v;
    horizontal = h;
}

int Player::GetVerticalLocation(void) {
    return vertical;
    
}

int Player::GetHorizontalLocation(void) {
    return horizontal;
    
}

void Player::SetPlayerMoveFinished(void) {
    moveFinished = 1;
    
}

int Player::GetPlayerMoveFinished(void) {
    return moveFinished;
    
}

void printBoard(int numPlayers, Player players[], char boardArray[26][26]) { // Prints the game board and keeps track of player loc.
    
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            boardArray[i][j] = '.';
            
        }
    }
    
    for (int i = 1; i < 8; i++) {
        for (int j = 1; j < 8; j++) {
            boardArray[i][j] = ' ';
            
        }
    }
    
    for (int i = 1; i < 8; i++) {
        for (int j = 9; j < 17; j++) {
            boardArray[i][j] = ' ';
            
        }
    }
    
    for (int i = 1; i < 8; i++) {
        for (int j = 18; j < 25; j++) {
            boardArray[i][j] = ' ';
            
        }
    }
    
    for (int i = 9; i < 17; i++) {
        for (int j = 1; j < 8; j++) {
            boardArray[i][j] = ' ';
            
        }
    }
    
    for (int i = 9; i < 17; i++) {
        for (int j = 10; j < 16; j++) {
            boardArray[i][j] = ' ';
            
        }
    }
    
    for (int i = 9; i < 12; i++) {
        for (int j = 18; j < 25; j++) {
            boardArray[i][j] = ' ';
            
        }
    }
    
    for (int i = 13; i < 17; i++) {
        for (int j = 18; j < 25; j++) {
            boardArray[i][j] = ' ';
            
        }
    }
    
    for (int i = 18; i < 25; i++) {
        for (int j = 1; j < 8; j++) {
            boardArray[i][j] = ' ';
            
        }
    }
    
    for (int i = 18; i < 25; i++) {
        for (int j = 9; j < 17; j++) {
            boardArray[i][j] = ' ';
            
        }
    }
    
    for (int i = 18; i < 25; i++) {
        for (int j = 18; j < 25; j++) {
            boardArray[i][j] = ' ';
            
        }
    }
    
    boardArray[2][2] = 'K';
    boardArray[2][3] = 't';
    boardArray[2][4] = 'c';
    boardArray[2][5] = 'n';
    boardArray[2][11] = 'B';
    boardArray[2][12] = 'l';
    boardArray[2][13] = 'r';
    boardArray[2][14] = 'm';
    boardArray[2][20] = 'C';
    boardArray[2][21] = 'n';
    boardArray[2][22] = 'v';
    boardArray[2][23] = 't';
    boardArray[10][2] = 'D';
    boardArray[10][3] = 'n';
    boardArray[10][4] = 'g';
    boardArray[10][5] = 'R';
    boardArray[10][11] = 'C';
    boardArray[10][12] = 'l';
    boardArray[10][13] = 'r';
    boardArray[10][20] = 'B';
    boardArray[10][21] = 'l';
    boardArray[10][22] = 'd';
    boardArray[15][20] = 'L';
    boardArray[15][21] = 'i';
    boardArray[15][22] = 'b';
    boardArray[20][2] = 'L';
    boardArray[20][3] = 'o';
    boardArray[20][4] = 'u';
    boardArray[20][5] = 'n';
    boardArray[20][6] = 'g';
    boardArray[20][11] = 'H';
    boardArray[20][12] = 'a';
    boardArray[20][13] = 'l';
    boardArray[20][14] = 'l';
    boardArray[20][20] = 'S';
    boardArray[20][21] = 't';
    boardArray[20][22] = 'd';
    boardArray[20][23] = 'y';
    boardArray[players[0].GetVerticalLocation()][players[0].GetHorizontalLocation()] = 'W';         // Everytime the board is printed-
    boardArray[players[1].GetVerticalLocation()][players[1].GetHorizontalLocation()] = 'G';         // -the current player locations
    if (numPlayers >= 3) {                                                                          // are tracked and updated on the-
        boardArray[players[2].GetVerticalLocation()][players[2].GetHorizontalLocation()] = 'B';     // -game board globally
                                                                                                    
    }
    if (numPlayers >= 4) {
        boardArray[players[3].GetVerticalLocation()][players[3].GetHorizontalLocation()] = 'Y';
        
    }
    if (numPlayers >= 5) {
        boardArray[players[4].GetVerticalLocation()][players[4].GetHorizontalLocation()] = 'P';
        
    }
    if (numPlayers >= 6) {
        boardArray[players[5].GetVerticalLocation()][players[5].GetHorizontalLocation()] = 'R';
        
    }
    boardArray[5][9] = '/';
    boardArray[5][16] = '/';
    boardArray[7][10] = '/';
    boardArray[7][15] = '/';
    boardArray[7][6] = '/';
    boardArray[7][19] = '/';
    boardArray[11][7] = '/';
    boardArray[10][18] = '/';
    boardArray[11][23] = '/';
    boardArray[16][6] = '/';
    boardArray[18][5] = '/';
    boardArray[18][12] = '/';
    boardArray[18][13] = '/';
    boardArray[15][18] = '/';
    boardArray[13][21] = '/';
    boardArray[18][19] = '/';
    
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            cout << boardArray[i][j] << " "; // Outputs board using for loops
            
        }
        cout << "\n";
        
    }
}

void moveCharAndPrintBoard(int numPlayers, int currPlayer, Player players[], char boardArray[26][26]) { // Prints board and allows-
    printBoard(numPlayers, players, boardArray);                                                        // -player movement
    int moveChoice = 0; // For allowing the player to choose the direction they would like to move
    char currCharacter; // For swapping the previous player location with new player location to update player representation on board
    
    cout << "\nYou roll the die.\n\n";
    
    for (int amountMoves = diceRoll(); amountMoves > 0; amountMoves--) { // Allows you to move # times based on the random dice roll
    retry:
    retryMoveChoice:
        cout << "You have " << amountMoves << " move(s) remaining.\n\nWhere would you like to move?\n\n\t1. Right\n\t2. Left\n\t3. Up\n\t4. Down\n\t5. End move\n\nEnter choice here: ";
        while(!(cin >> moveChoice)) {
            cout << "Must enter a number: ";
            cin.clear();
            cin.ignore(123, '\n');
            
        }
        if ((moveChoice < 1) || (moveChoice > 5)) {
            cout << "\nNot a valid move.\n\n";
            goto retryMoveChoice; // Sends player to line 218
            
        }
        if (moveChoice == 1) {
            currCharacter = boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation()];
            if ((boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation() + 1] == '.') || (boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation() + 1] == '/')) {
                boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation()] = '.';
                players[currPlayer].SetPlayerLocation(players[currPlayer].GetVerticalLocation(), players[currPlayer].GetHorizontalLocation() + 1);
                boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation()] = currCharacter;
                
            }
            else {
                cout << "\nNot a valid move.\n\n";
                goto retry; // Sends player to line 217
                
            }
        }
        if (moveChoice == 2) {
            currCharacter = boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation()];
            if ((boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation() - 1] == '.') || (boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation() - 1] == '/')) {
                boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation()] = '.';
                players[currPlayer].SetPlayerLocation(players[currPlayer].GetVerticalLocation(), players[currPlayer].GetHorizontalLocation() - 1);
                boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation()] = currCharacter;
                
            }
            else {
                cout << "\nNot a valid move.\n\n";
                goto retry;
                
            }
        }
        if (moveChoice == 3) {
            currCharacter = boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation()];
            if ((boardArray[players[currPlayer].GetVerticalLocation() - 1][players[currPlayer].GetHorizontalLocation()] == '.') || (boardArray[players[currPlayer].GetVerticalLocation() - 1][players[currPlayer].GetHorizontalLocation()] == '/')) {
                boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation()] = '.';
                players[currPlayer].SetPlayerLocation(players[currPlayer].GetVerticalLocation() - 1, players[currPlayer].GetHorizontalLocation());
                boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation()] = currCharacter;
                
            }
            else {
                cout << "\nNot a valid move.\n\n";
                goto retry;
                
            }
        }
        if (moveChoice == 4) {
            currCharacter = boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation()];
            if ((boardArray[players[currPlayer].GetVerticalLocation() + 1][players[currPlayer].GetHorizontalLocation()] == '.') || (boardArray[players[currPlayer].GetVerticalLocation() + 1][players[currPlayer].GetHorizontalLocation()] == '/')) {
                boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation()] = '.';
                players[currPlayer].SetPlayerLocation(players[currPlayer].GetVerticalLocation() + 1, players[currPlayer].GetHorizontalLocation());
                boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation()] = currCharacter;
                
            }
            else {
                cout << "\nNot a valid move.\n\n";
                goto retry;
                
            }
        }
        if (moveChoice == 5) {                           // Ends player movement prematurely
            players[currPlayer].SetPlayerMoveFinished(); // To ensure player does not move more than once per turn
            goto done;                                   // Sends player to line 296
            
        }
        players[currPlayer].SetPlayerMoveFinished();
        printBoard(numPlayers, players, boardArray);
        
    }
done:
    cout << "\n";
    
}

void setStartingLocation(int numPlayers, Player players[]) { // Sets the starting location of all players at beginning of game
    for (int i = 0; i < numPlayers; i++) {
        if (players[i].CheckActive() == true) {
            if (i == 0) {
                players[i].SetPlayerLocation(0, 8);
                
            }
            else if (i == 1) {
                players[i].SetPlayerLocation(0, 17);
                
            }
            else if (i == 2) {
                players[i].SetPlayerLocation(8, 25);
                
            }
            else if (i == 3) {
                players[i].SetPlayerLocation(17, 25);
                
            }
            else if (i == 4) {
                players[i].SetPlayerLocation(25, 8);
                
            }
            else if (i == 5) {
                players[i].SetPlayerLocation(17, 0);
                
            }
        }
        else {
            continue;
            
        }
    }
}

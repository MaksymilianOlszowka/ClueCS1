//
//  Map Functions.hpp
//  Integration 2
//
//  Created by Maksymilian Olszowka on 5/7/22.
//

#ifndef Map_Functions_hpp
#define Map_Functions_hpp

#include <stdio.h>
#include "Player.hpp"
using namespace std;

void printBoard(int numPlayers, Player players[], char boardArray[26][26]);
void moveCharAndPrintBoard(int numPlayers, int currPlayer, Player players[], char boardArray[26][26]);
void setStartingLocation(int numPlayers, Player players[]);
int diceRoll(void);

#endif /* Map_Functions_hpp */

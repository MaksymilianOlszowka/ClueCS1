//
//  Card Functions.hpp
//  Integration 2
//
//  Created by Maksymilian Olszowka on 5/5/22.
//

#ifndef Card_Functions_hpp
#define Card_Functions_hpp

#include <string>
#include <stdio.h>
#include "Player.hpp"
using namespace std;

string setCharacters(void);

string setWeapons(void);

string setLocations(void);

string* distribute(int numPlayers, Player players[]);

#endif /* Card_Functions_hpp */

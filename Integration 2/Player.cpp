//
//  Player.cpp
//  Integration 2
//
//  Created by Maksymilian Olszowka on 5/5/22.
//

#include <iostream>
#include "Player.hpp"
using namespace std;

void Player::SetActivePlayers(void) {
    Active = true;
    
}

void Player::SetPlayerInactive(void) {
    Active = false;
    
}

void funcSetActivePlayers(int numPlayers, Player players[]) {
    for (int i = 0; i < numPlayers; i++) { // Iterates through # players until every player is set as "active"
        players[i].SetActivePlayers();
        
    }
}

bool Player::CheckActive(void) {
    return Active;
    
}

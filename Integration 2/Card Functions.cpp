//
//  Card Functions.cpp
//  Integration 2
//
//  Created by Maksymilian Olszowka on 5/5/22.
//

#include "Card Functions.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void Player::SetPlayerHand(string card) { // Sets players hand by sending random card from remainder deck to the Player class
    CardsInHand[numCards] = card;
    numCards++;
    
}

void Player::GetPlayerHand(void) {        // Prints the cards in a player's hand
    cout << "Cards in hand : \n\n";
    for (int i = 0; i < numCards; i++) {
        cout << CardsInHand[i] << "\n";
        
    }
    cout << "\n";
    
}

string setCharacters(void) {              // Sets a random character as the character in the case file
    string characters[6] = { "Professor Plum", "Mrs. White", "Mr. Green", "Mrs. Peacock", "Colonel Mustard", "Mrs. Scarlett"};
    
    srand(static_cast<unsigned int>(time(nullptr)));
    
    int randomCards1 = (rand() % 6);
    
    string randCard1 = characters[randomCards1];
    
    return randCard1;
    
}

string setWeapons(void) {                 // Sets a random weapon as the weapon in the case file
    string weapons[6] = { "Candle Stick", "Knife", "Lead Pipe", "Rope", "Wrench", "Pistol" };
    
    srand(static_cast<unsigned int>(time(nullptr)));
    
    int randomCards2 = (rand() % 5);
    
    string randCard2 = weapons[randomCards2];
    
    return randCard2;
    
}

string setLocations(void) {               // Sets a random location as the location in the case file
    string locations[9] = { "Dining Room", "Billiard Room", "Study", "Conservatory", "Library", "Ballroom", "Lounge", "Hall", "Kitchen" };
    
    srand(static_cast<unsigned int>(time(nullptr)));
    
    int randomCards3 = (rand() % 9);
    
    string randCard3 = locations[randomCards3];
    
    return randCard3;
    
}

string* distribute(int numPlayers, Player players[]) { // Sets case file and randomly & equally distribute cards among players
    int index = 0;
    
    string characters[6] = { "Professor Plum", "Mrs. White", "Mr. Green", "Mrs. Peacock", "Colonel Mustard", "Mrs. Scarlett" };
    string weapons[6] = { "Candle Stick", "Knife", "Lead Pipe", "Rope", "Wrench", "Pistol" };
    string locations[9] = { "Dining Room", "Billiard Room", "Study", "Conservatory", "Library", "Ballroom", "Lounge", "Hall", "Kitchen" };
    
    string remainderDeck[18];             // The deck of cards without the three set aside for the case file
    
    string chosenCharacter = setCharacters();
    string chosenWeapons = setWeapons();
    string chosenLocations = setLocations();
    
    string* caseFile = new string[3];     // Allows the entire case file array to be returned to the main program
    caseFile[0] = chosenCharacter;
    caseFile[1] = chosenWeapons;
    caseFile[2] = chosenLocations;
    
    srand(static_cast<unsigned int>(time(nullptr)));
    
    for (int i = 0; i < 6; i++) {         // Lines 90-110 ensures that the remainder deck doesn't contain one of the case file cards
        if (characters[i] != chosenCharacter) {
            remainderDeck[index] = characters[i];
            index++;
            
        }
    }
    for (int i = 0; i < 6; i++) {
        if (weapons[i] != chosenWeapons) {
            remainderDeck[index] = weapons[i];
            index++;
            
        }
    }
    for (int i = 0; i < 9; i++) {
        if (locations[i] != chosenLocations) {
            remainderDeck[index] = locations[i];
            index++;
            
        }
    }
    
    for (int i = 0; i < 1000; i++) {      // Randomly shuffles the remainder deck
        int randNum1 = (rand() % 18);
        int randNum2 = (rand() % 18);
        string temp = remainderDeck[randNum1];
        remainderDeck[randNum1] = remainderDeck[randNum2];
        remainderDeck[randNum2] = temp;
        
    }
    
    int i = 0;
    while (i < 18) {                      // Equally distributes the random deck throughout all the "active" players
        for (int j = 0; j < numPlayers && i < 18; j++) {
            if (players[j].CheckActive() == true) {
                players[j].SetPlayerHand(remainderDeck[i++]);
                
            }
        }
    }
    return caseFile;                      // Returns case file array to the main program
    
}

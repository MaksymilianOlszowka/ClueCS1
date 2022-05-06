//
//  Card Functions.cpp
//  Integration 2
//
//  Created by Maksymilian Olszowka on 5/5/22.
//

#include "Card Functions.hpp"
#include <iostream>
using namespace std;

string setCharacters(void) {
    string characters[6] = { "Professor Plum", "Mrs. White", "Mr. Green", "Mrs. Peacock", "Colonel Mustard", "Mrs. Scarlett"};
    
    srand(static_cast<unsigned int>(time(nullptr)));
    
    int randomCards1 = (rand() % 6);
    
    string randCard1 = characters[randomCards1];
    
    return randCard1;
    
}

string setWeapons(void) {
    string weapons[6] = { "Candle Stick", "Knife", "Lead Pipe", "Rope", "Wrench", "Pistol" };
    
    srand(static_cast<unsigned int>(time(nullptr)));

    int randomCards2 = (rand() % 6);
    
    string randCard2 = weapons[randomCards2];
    
    return randCard2;

}

string setLocations(void) {
    string location[9] = { "Dining Room", "Billiard Room", "Study", "Conservatory", "Library", "Ballroom", "Lounge", "Hall", "Kitchen" };
    
    srand(static_cast<unsigned int>(time(nullptr)));

    int randomCards3 = (rand() % 9);
    
    string randCard3 = location[randomCards3];
    
    return randCard3;
    
}

void getcaseFile(void) {
    cout << setCharacters() << ", ";
    cout << setWeapons() << ", ";
    cout << setLocations() << " ";
    
}

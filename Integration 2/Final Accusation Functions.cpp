//
//  Final Accusation Functions.cpp
//  Integration 2
//
//  Created by Maksymilian Olszowka on 5/8/22.
//

#include <iostream>
#include "Final Accusation Functions.hpp"
#include "Player.hpp"
using namespace std;

bool finalAccusation(string caseFile[3], Player players[], int currPlayer) { // Allows player to make accusation, determines win/lose
    string characters[6] = { "Professor Plum", "Mrs. White", "Mr. Green", "Mrs. Peacock", "Colonel Mustard", "Mrs. Scarlett" };
    string weapons[6] = { "Candle Stick", "Knife", "Lead Pipe", "Rope", "Wrench", "Pistol" };
    string locations[9] = { "Dining Room", "Billiard Room", "Study", "Conservatory", "Library", "Ballroom", "Lounge", "Hall", "Kitchen" };
    int accusedCharacter; // Variables on line 17-19 for list navigation and determining location in index of previous arrays
    int accusedWeapon;
    int accusedLocation;
    char usrChoice;       // Allows player to confirm their final accusation
    bool win = false;     // For determining win/lost condition
    
retry:
retryAccusedChar:
    cout << "Make your final accusations: \n\n\t1. Professor Plum\n\t2. Mrs. White\n\t3. Mr. Green\n\t4. Mrs. Peacock\n\t5. Colonel Mustard\n\t6. Mrs. Scarlett\n\nEnter choice here : ";
    while(!(cin >> accusedCharacter)) {
        cout << "Must enter a number: ";
        cin.clear();
        cin.ignore(123, '\n');
        
    }
    if ((accusedCharacter < 1) || (accusedCharacter > 6)) {
        cout << "\nNot a valid choice\n\n";
        goto retryAccusedChar; // Sends player to line 24
        
    }
retryAccusedWeap:
    cout << "\n\n\t1. Candle Stick\n\t2. Knife\n\t3. Lead Pipe\n\t4. Rope\n\t5. Wrench\n\t6. Pistol\n\nEnter choice here : ";
    while(!(cin >> accusedWeapon)) {
        cout << "Must enter a number: ";
        cin.clear();
        cin.ignore(123, '\n');
        
    }
    if ((accusedWeapon < 1) || (accusedWeapon > 6)) {
        cout << "\nNot a valid choice\n\n";
        goto retryAccusedWeap; // Sends player to line 37
        
    }
retryAccusedLoc:
    cout << "\n\n\t1. Dining Room\n\t2. Billiard Room\n\t3. Study\n\t4. Conservatory\n\t5. Library\n\t6. Ballroom\n\t7. Lounge\n\t8. Hall\n\t9. Kitchen\n\nEnter choice here : ";
    while(!(cin >> accusedLocation)) {
        cout << "Must enter a number: ";
        cin.clear();
        cin.ignore(123, '\n');
        
    }
    if ((accusedLocation < 1) || (accusedLocation > 9)) {
        cout << "\nNot a valid choice\n\n";
        goto retryAccusedLoc; // Sends player to line 50
        
    }
retryUsrChoice:
    cout << "\n\nAre you sure you want to accuse these cards? : \n\n\t" << characters[accusedCharacter - 1] << "\n\t" << weapons[accusedWeapon - 1] << "\n\t" << locations[accusedLocation - 1] << "\n\n(y/n) : ";
    cin >> usrChoice;
    usrChoice = tolower(usrChoice);
    if ((usrChoice != 'y') && (usrChoice != 'n')) {
        cout << "\nNot a valid input.\n\n";
        goto retryUsrChoice;
        
    }
    if (usrChoice == 'n') {
        goto retry; // Sends player to line 23
        
    }
    if ((caseFile[0] == characters[accusedCharacter - 1]) && (caseFile[1] == weapons[accusedWeapon - 1]) && (caseFile[2] == locations[accusedLocation - 1])) { // For determining if the player's accusation matches the contents of the case file
        cout << "\nYou win!\n\n";
        return win = true;
        
    }
    else {
        cout << "\nYou lose :(\n\n";
        return win = false;
        
    }
}

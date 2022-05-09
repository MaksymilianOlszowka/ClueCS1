//
//  Suggestion Functions.cpp
//  Integration 2
//
//  Created by Maksymilian Olszowka on 5/8/22.
//

#include <iostream>
#include <string>
#include "Suggestion Functions.hpp"
#include "Player.hpp"
using namespace std;

void Player::SetPlayerSuggestFinished(void) { // Ensures players to suggest more than once per turn
    suggestFinished = 1;
    
}

int Player::GetPlayerSuggestFinished(void) {
    return suggestFinished;
    
}

void suggestCards(string caseFile[3], Player players[], int currPlayer, char boardArray[26][26]) { // Allows players to suggest cards
    string characters[6] = { "Professor Plum", "Mrs. White", "Mr. Green", "Mrs. Peacock", "Colonel Mustard", "Mrs. Scarlett" };
    string weapons[6] = { "Candle Stick", "Knife", "Lead Pipe", "Rope", "Wrench", "Pistol" };
    string locations[9] = { "Dining Room", "Billiard Room", "Study", "Conservatory", "Library", "Ballroom", "Lounge", "Hall", "Kitchen" };
    int suggestedCharacter; // Variable on lines 28-30 are for list navigation and determining index of card(s) from previous arrays
    int suggestedWeapon;
    int suggestedLocation;
    char usrChoice;         // Allows the player to confirm their suggestion
    
    if (boardArray[players[currPlayer].GetVerticalLocation()][players[currPlayer].GetHorizontalLocation()] != '/') {
        goto end;           // Ensures/confirms that the player is in a room to make a suggestion. Sends player to line 119
        
    }
    
retry:
retrySuggestedChar:
    cout << "Make your suggestions: \n\n\t1. Professor Plum\n\t2. Mrs. White\n\t3. Mr. Green\n\t4. Mrs. Peacock\n\t5. Colonel Mustard\n\t6. Mrs. Scarlett\n\nEnter choice here : ";
    while(!(cin >> suggestedCharacter)) {
        cout << "Must enter a number: ";
        cin.clear();
        cin.ignore(123, '\n');
        
    }
    if ((suggestedCharacter < 1) || (suggestedCharacter > 6)) {
        cout << "\nNot a valid choice\n\n";
        goto retrySuggestedChar; // Sends player to line 39
        
    }
retrySuggestedWeap:
    cout << "\n\n\t1. Candle Stick\n\t2. Knife\n\t3. Lead Pipe\n\t4. Rope\n\t5. Wrench\n\t6. Pistol\n\nEnter choice here : ";
    while(!(cin >> suggestedWeapon)) {
        cout << "Must enter a number: ";
        cin.clear();
        cin.ignore(123, '\n');
        
    }
    if ((suggestedWeapon < 1) || (suggestedWeapon > 6)) {
        cout << "\nNot a valid choice\n\n";
        goto retrySuggestedWeap; // Sends player to line 52
        
    }
retrySuggestedLoc:
    cout << "\n\n\t1. Dining Room\n\t2. Billiard Room\n\t3. Study\n\t4. Conservatory\n\t5. Library\n\t6. Ballroom\n\t7. Lounge\n\t8. Hall\n\t9. Kitchen\n\nEnter choice here : ";
    while(!(cin >> suggestedLocation)) {
        cout << "Must enter a number: ";
        cin.clear();
        cin.ignore(123, '\n');
        
    }
    if ((suggestedLocation < 1) || (suggestedLocation > 9)) {
        cout << "\nNot a valid choice\n\n";
        goto retrySuggestedLoc; // Sends player to line 65
        
    }
retryUsrChoice:
    cout << "\n\nAre you sure you want to suggest these cards? : \n\n\t" << characters[suggestedCharacter - 1] << "\n\t" << weapons[suggestedWeapon - 1] << "\n\t" << locations[suggestedLocation - 1] << "\n\n(y/n) : ";
    cin >> usrChoice;          // Lets player confirm if their choices were correct
    usrChoice = tolower(usrChoice);
    if ((usrChoice != 'y') && (usrChoice != 'n')) {
        cout << "\nNot a valid input.\n\n";
        goto retryUsrChoice;   // Sends player to line 78
        
    }
    if (usrChoice == 'n') {
        goto retry;            // Sends player to line 38
        
    }
    if (characters[suggestedCharacter - 1] == caseFile[0]) { // Lines 91-118 give the player info to make deductions
        cout << "\nNone of the players have the " << characters[suggestedCharacter - 1] << " card\n";
        
    }
    if (weapons[suggestedWeapon - 1] == caseFile[1]) {
        cout << "None of the players have the " << weapons[suggestedWeapon - 1] << " card\n";
        
    }
    if (locations[suggestedLocation - 1] == caseFile[2]) {
        cout << "None of the players have the " << locations[suggestedLocation - 1] << " card\n";
        players[currPlayer].SetPlayerSuggestFinished();
        goto done; // Sends player to line 119
        
    }
    if (characters[suggestedCharacter - 1] != caseFile[0]) {
        cout << "\nA player has the " << characters[suggestedCharacter - 1] << " card\n";
        
    }
    if (weapons[suggestedWeapon - 1] != caseFile[1]) {
        cout << "A player has the " << weapons[suggestedWeapon - 1] << " card\n";
        
    }
    if (locations[suggestedLocation - 1] != caseFile[2]) {
        cout << "A player has the " << locations[suggestedLocation - 1] << " card\n";
        players[currPlayer].SetPlayerSuggestFinished();
        goto done;
        
    }
end:
    cout << "Must be in room to make a suggestion\n";
done:
    cout << "\n";
    
}

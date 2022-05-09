//
//  main.cpp
//  Integration 2
//
//  Created by Maksymilian Olszowka on 5/5/22.
//

#include <iostream>
#include <string>
#include "Player.hpp"
#include "Card Functions.hpp"
#include "Map Functions.hpp"
#include "Detective Notes Functions.hpp"
#include "Final Accusation Functions.hpp"
#include "Suggestion Functions.hpp"
using namespace std;

int main() {
    restartGame:
    Player players[6];              // Creates an array of 6 objects, each object represents a player.
    char boardArray[26][26];        // The array that makes up the printed game board
    
    int numPlayers;                 // For iterating through players, determines how many objects are considered "active"
    char playerChoice;              // For the confirmation for setting the number of players
    int playerEndTurnChoice;        // Allows the user to stay on their turn until they choose to end their turn
    char playerQuitChoice = 'y';    // Allows the user to quit the game
    int playerMenu = 0;             // For letting the player specify what menu item they want to access
    
    cout << "Welcome to the Game of Clue!\n\n";
    retry:
    cout << "How many players do you wish to play with? (Min: 2, Max: 6) : "; // makes this more user accessable
    while(!(cin >> numPlayers)) {   // Input validation error checker. Ensures that an integer was entered
        cout << "Must enter a number: ";
        cin.clear();
        cin.ignore(123, '\n');
        
    }
    cout << "\n";
    
    if ((numPlayers < 2) || (numPlayers > 6)) { // Prevents number of players outside of range
        cout << "Invalid amount of players, please retry\n";
        goto retry;                 // Sends player to reinput number of players. retry: found on line 31
        
    }
    
retryPlayerChoice:
    cout << numPlayers << " are playing, is this correct? (y/n) : ";
    cin >> playerChoice;
    playerChoice = tolower(playerChoice); // Negates case-sensitivity in user input
    if ((playerChoice != 'y') && (playerChoice != 'n')) { // Prevents non-alpha inputs from being made
        cout << "\nNot a valid input.\n\n";
        goto retryPlayerChoice;     // Sends player to reinput their confirmation of number of players. Sends to line 47
        
    }
    
    if (playerChoice == 'n') {
        goto retry;
        
    }
    else {
        cout << "\nAlright gamers! Lets start the game!\n\n";
        
    }
    
    int remainingPlayers = numPlayers; // For determining if a player is the last player "active" in the game. Last player auto-wins
    
    funcSetActivePlayers(numPlayers, players); // Sets the specified # of players as "active"
    
    string* caseFile = distribute(numPlayers, players); // Sets case file, shuffles remaining cards, and distributes cards randomly
    
    setStartingLocation(numPlayers, players); // Sets the starting location of all players "active" in the game
    
    do {
        for (int currPlayer = 0; currPlayer < numPlayers; currPlayer++) { // For iterating through all the players and gives them turns
            playerEndTurnChoice = 0;
            if (players[currPlayer].CheckActive() == false) {  // For skipping a previously "active" player if they met loss conditions
                playerEndTurnChoice = 1;
                
            }
            if (remainingPlayers == 1) {      // If all other players make wrong accusation, the last player remaining auto-wins
                goto win;
                
            }
            while (playerEndTurnChoice != 1) { // Runs menu code until player ends their turn
                
            retry2:
                cout << "It is player " << currPlayer + 1 << "'s turn.\n\nMenu: \n" << "\n\t1. View the map" << "\n\t2. View/edit your detective notes" << "\n\t3. View cards in hand" << "\n\t4. Roll/Move" << "\n\t5. Suggest" << "\n\t6. Final accusation" << "\n\t7. End turn\n\t8. Quit game\n\nEnter choice here: ";
                while (!(cin >> playerMenu)) {
                    cout << "Must enter a number: ";
                    cin.clear();
                    cin.ignore(123, '\n');
                    
                }
                if ((playerMenu < 1) || (playerMenu > 8)) {
                    cout << "\nNot a valid choice\n\n";
                    goto retry2;
                    
                }
                
                if (playerMenu == 1) {
                    cout << "\n";
                    printBoard(numPlayers, players, boardArray); // Prints the current board with updated player positions
                    
                }
                if (playerMenu == 2) {
                    cout << "\n";
                    players[currPlayer].EditDetectiveNotes(currPlayer, players); // Prints detective notes and allows player to edit
                    
                }
                if (playerMenu == 3) {
                    cout << "\n";
                    players[currPlayer].GetPlayerHand(); // Prints the randomly distributed cards in the player's hand
                    
                }
                if (playerMenu == 4) {
                    cout << "\n";
                    if (players[currPlayer].GetPlayerMoveFinished() == 0) { // Ensures player does not move more than once per turn
                        moveCharAndPrintBoard(numPlayers, currPlayer, players, boardArray); // Prints board and allows player to move
                        
                    }
                    else {
                        cout << "You cannot move again.\n\n";
                        
                    }
                }
                if (playerMenu == 5) {
                    cout << "\n";
                    if (players[currPlayer].GetPlayerSuggestFinished() == 0) { // Ensure player does not suggest more than once /turn
                        suggestCards(caseFile, players, currPlayer, boardArray); // Allows player to make suggestions
                        
                    }
                    else {
                        cout << "You cannot suggest again.\n\n";
                        
                    }
                }
                if (playerMenu == 6) {
                    cout << "\n";
                    bool win = finalAccusation(caseFile, players, currPlayer); // Allows player to make final suggestion
                    if (win == true) {                   // For determining if a player won from their accusation
                        goto win;                        // Sends to line 182
                        
                    }
                    if (win == false) {
                        players[currPlayer].SetPlayerInactive(); // If player made false accusation, they lost and no longer can play
                        remainingPlayers--;
                        playerEndTurnChoice = 1;         // Ends player turn
                        
                    }
                }
                if (playerMenu == 7) {
                    playerEndTurnChoice = 1;
                    for (int i = 0; i < 100; i++) {      // For clearing the terminal, prevents players from cheating
                        cout << "\n\n\n\n\n\n\n";
                        
                    }
                }
                if (playerMenu == 8) {
                
                retryPlayerQuitChoice:
                    cout << "Thank you for playing the game!\nDo you wish to play again? (y/n) : ";
                    cin >> playerQuitChoice;
                    playerQuitChoice = tolower(playerQuitChoice);
                    if ((playerQuitChoice != 'y') && (playerQuitChoice != 'n')) {
                        cout << "\nNot a valid input.\n\n";
                        goto retryPlayerQuitChoice;
                        
                    }
                    if (playerQuitChoice == 'y') {
                        goto restartGame;                // Allows player to restart the game. Sends to line 19
                        
                    }
                    else if (playerQuitChoice == 'n') {
                        goto quit;                       // Allows player to quit the game. Sends to line 208
                        
                    }
                }
            }
        }
    } while (playerQuitChoice != 'n');                   // Loops game until player quits or one of the win conditions is met
    
win:
    for (int i = 0; i < numPlayers; i++) {
        if (players[i].CheckActive() == true) {
            cout << "Player " << i + 1 << " won!\n\n";
            
        }
    }
    
retryPlayerQuitChoice2:
    cout << "Thank you for playing the game!\nDo you wish to play again? (y/n) : "; // goes back to the same goto funciton
    cin >> playerQuitChoice;
    playerQuitChoice = tolower(playerQuitChoice);
    if ((playerQuitChoice != 'y') && (playerQuitChoice != 'n')) {
        cout << "\nNot a valid input.\n\n";
        goto retryPlayerQuitChoice2;
        
    }
    if (playerQuitChoice == 'y') {
        goto restartGame;
        
    }
    else if (playerQuitChoice == 'n') {
        goto quit;
        
    }
    
quit:
    
    cout << "Goodbye!\n"; // :) Thanks Max for the great send-off message
    return 0;
    
}

        

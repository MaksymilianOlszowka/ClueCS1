//
//  main.cpp
//  Integration 2
//
//  Created by Maksymilian Olszowka on 5/5/22.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Player.hpp"
#include "Card Functions.hpp"
#include "Map Functions.hpp"
#include "Detective Notes Functions.hpp"
#include "Final Accusation Functions.hpp"
#include "Suggestion Functions.hpp"
using namespace std;

int main() {
restartGame:
    Player players[6];
    char boardArray[26][26];

    int numPlayers;
    char playerChoice;
    int playerEndTurnChoice;
    char playerQuitChoice = 'y';
    int playerMenu = 0; // temporary numbers in order to determine funcitonality.

    cout << "Welcome to the Game of Clue!\n\n";
retry:
    cout << "How many players do you wish to play with? (Min: 2, Max: 6) : "; // makes this more user accessable
    while (!(cin >> numPlayers)) {
        cout << "Must enter a number: ";
        cin.clear();
        cin.ignore(123, '\n');

    }
    cout << "\n";

    if ((numPlayers < 2) || (numPlayers > 6)) { // ensures that we only get the same number of players as there are character pieces
        cout << "Invalid amount of players, please retry\n";
        goto retry; // goto allows to display the correct amount of players

    }

retryPlayerChoice:
    cout << numPlayers << " are playing, is this correct? (y/n) : ";
    cin >> playerChoice;
    playerChoice = tolower(playerChoice);
    if ((playerChoice != 'y') && (playerChoice != 'n')) {
        cout << "\nNot a valid input.\n\n";
        goto retryPlayerChoice;

    }

    if (playerChoice == 'n') {
        goto retry;

    }
    else {
        cout << "\nAlright gamers! Lets start the game!\n\n";

    }

    int remainingPlayers = numPlayers;

    funcSetActivePlayers(numPlayers, players);

    string* caseFile = distribute(numPlayers, players);

    setStartingLocation(numPlayers, players);

    do {
        for (int currPlayer = 0; currPlayer < numPlayers; currPlayer++) {
            playerEndTurnChoice = 0;
            if (players[currPlayer].CheckActive() == false) {
                playerEndTurnChoice = 1;

            }
            if (remainingPlayers == 1) {
                goto win;

            }
            while (playerEndTurnChoice != 1) {

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
                    printBoard(numPlayers, players, boardArray); // call up the map function Max is working on

                }
                if (playerMenu == 2) {
                    cout << "\n"; // pull up the note function that max completed
                    players[currPlayer].EditDetectiveNotes(currPlayer, players);

                }
                if (playerMenu == 3) {
                    cout << "\n";
                    players[currPlayer].GetPlayerHand();

                }
                if (playerMenu == 4) {
                    cout << "\n";
                    if (players[currPlayer].GetPlayerMoveFinished() == 0) {
                        moveCharAndPrintBoard(numPlayers, currPlayer, players, boardArray);

                    }
                    else {
                        cout << "You cannot move again.\n\n";

                    }
                }
                if (playerMenu == 5) {
                    cout << "\n"; // this will pull up the suggestion function previously used
                    if (players[currPlayer].GetPlayerSuggestFinished() == 0) {
                        suggestCards(caseFile, players, currPlayer, boardArray);

                    }
                    else {
                        cout << "You cannot suggest again.\n\n";

                    }
                }
                if (playerMenu == 6) {
                    cout << "\n";
                    bool win = finalAccusation(caseFile, players, currPlayer);
                    if (win == true) {
                        goto win;

                    }
                    if (win == false) {
                        players[currPlayer].SetPlayerInactive();
                        remainingPlayers--;
                        playerEndTurnChoice = 1;

                    }
                }
                if (playerMenu == 7) {
                    playerEndTurnChoice = 1;
                    system("clear");

                }
                if (playerMenu == 8) {

                retryPlayerQuitChoice:
                    cout << "Thank you for playing the game!\nDo you wish to play again? (y/n) : "; // goes back to the same goto funciton
                    cin >> playerQuitChoice;
                    playerQuitChoice = tolower(playerQuitChoice);
                    if ((playerQuitChoice != 'y') && (playerQuitChoice != 'n')) {
                        cout << "\nNot a valid input.\n\n";
                        goto retryPlayerQuitChoice;

                    }
                    if (playerQuitChoice == 'y') {
                        goto restartGame;

                    }
                    else if (playerQuitChoice == 'n') {
                        goto quit;

                    }
                }
            }
        }
    } while (playerQuitChoice != 'n');

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



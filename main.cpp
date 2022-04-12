//
//  main.cpp
//  Detective Notes 1
//
//  Created by Maksymilian Olszowka on 4/7/22.
//

#include <iostream>
using namespace std;

void printNotes(char colMust, char profPlum, char mrGreen, char mrsPcock, char msScar, char mrsWhite, char wpnKnife, char wpnCandle, char wpnPistol, char wpnRope, char wpnLead, char wpnWrench, char rmHall, char rmLounge, char rmDiningRm, char rmKitchen, char rmBallRm, char rmConserv, char rmBilliardRm, char rmLibrary, char rmStudy) { // Prints the notes. Reduces redundancy in code, easier to read.
    
    cout << "\nDETECTIVE NOTES\n\n";
    
    cout << "Suspects\n";
    cout << "_______________\n";
    cout << "Col. Mustard| ";
    cout << colMust;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Prof. Plum  | ";
    cout << profPlum;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Mr. Green   | ";
    cout << mrGreen;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Mrs. Peacock| ";
    cout << mrsPcock;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Ms. Scarlett| ";
    cout << msScar;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Mrs. White  | ";
    cout << mrsWhite;
    
    cout << "\n";
    cout << "---------------\n\n";
    
    cout << "Weapons\n";
    cout << "_______________\n";
    cout << "Knife       | ";
    cout << wpnKnife;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Candlestick | ";
    cout << wpnCandle;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Pistol      | ";
    cout << wpnPistol;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Rope        | ";
    cout << wpnRope;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Lead Pipe   | ";
    cout << wpnLead;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Wrench      | ";
    cout << wpnWrench;
    
    cout << "\n";
    cout << "---------------\n\n";
    
    cout << "Rooms\n";
    cout << "_______________\n";
    cout << "Hall        | ";
    cout << rmHall;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Lounge      | ";
    cout << rmLounge;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Dining Room | ";
    cout << rmDiningRm;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Kitchen     | ";
    cout << rmKitchen;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Ball Room   | ";
    cout << rmBallRm;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Conservatory| ";
    cout << rmConserv;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Billiard Rm.| ";
    cout << rmBilliardRm;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Library     | ";
    cout << rmLibrary;
    
    cout << "\n";
    cout << "---------------\n";
    cout << "Study       | ";
    cout << rmStudy;
    
    cout << "\n";
    cout << "---------------\n\n";
}

void detectiveNotes() {
    int usrChoice, usrChoice2; // usrChoice determines the first thing the player would like to mark (Suspects, weapons, rooms). usrChoice2 lets the player choose what they would like to mark within the list.
    char usrChoice3; // usrChoice 3 lets the player mark either an X or an O next to a suspect, weapon, or room.
    char extChoice = '\0'; // extChoice allows player to determine if they would like to mark the detective notes more, or whether to quit the detective notes portion.
    
    char colMust = ' ';        // The char variables from line 135-157 is what will be changed when the user inputs 'X' or 'O' when making deductions.
    char profPlum = ' ';
    char mrGreen = ' ';
    char mrsPcock = ' ';
    char msScar = ' ';
    char mrsWhite = ' ';
    
    char wpnKnife = ' ';
    char wpnCandle = ' ';
    char wpnPistol = ' ';
    char wpnRope = ' ';
    char wpnLead = ' ';
    char wpnWrench = ' ';
    
    char rmHall = ' ';
    char rmLounge = ' ';
    char rmDiningRm = ' ';
    char rmKitchen = ' ';
    char rmBallRm = ' ';
    char rmConserv = ' ';
    char rmBilliardRm = ' ';
    char rmLibrary = ' ';
    char rmStudy = ' ';
    
    
    
    do {
        printNotes(colMust, profPlum, mrGreen, mrsPcock, msScar, mrsWhite, wpnKnife, wpnCandle, wpnPistol, wpnRope, wpnLead, wpnWrench, rmHall, rmLounge, rmDiningRm, rmKitchen, rmBallRm, rmConserv, rmBilliardRm, rmLibrary, rmStudy); // Prints the detective notes.
        
        cout << "What would you like to mark first?\n\n\t1. Suspects\n\t2. Weapons\n\t3. Rooms\n\nEnter (1-3) : ";
        cin >> usrChoice;
        cout << "\n";
        
        switch (usrChoice) {
            case 1:
                cout << "Who would you like to suspect?\n\n\t1. Col. Mustard\n\t2. Prof. Plum\n\t3. Mr. Green\n\t4. Mrs. Peacock\n\t5. Ms. Scarlett\n\t6. Mrs. White\n\t7. Skip\n\nEnter (1-7) : ";
                cin >> usrChoice2;
                switch (usrChoice2) {
                    case 1:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            colMust = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            colMust = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 2:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            profPlum = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            profPlum = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 3:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            mrGreen = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            mrGreen = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 4:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            mrsPcock = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            mrsPcock = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 5:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            msScar = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            msScar = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 6:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            mrsWhite = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            mrsWhite = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 7:
                        break;
                        }
            case 2:
                cout << "What weapon would you like to suspect?\n\n\t1. Knife\n\t2. Candlestick\n\t3. Pistol\n\t4. Rope\n\t5. Lead Pipe\n\t6. Wrench\n\t7. Skip\n\nEnter (1-7) : ";
                cin >> usrChoice2;
                switch (usrChoice2) {
                    case 1:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            wpnKnife = 'X';
                            break;
                            }
                    case 2:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            wpnCandle = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            wpnCandle = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 3:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            wpnPistol = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            wpnPistol = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 4:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            wpnRope = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            wpnRope = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 5:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            wpnLead = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            wpnLead = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 6:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            wpnWrench = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            wpnWrench = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 7:
                        break;
                        }
            case 3:
                cout << "What room would you like to suspect?\n\n\t1. Hall\n\t2. Lounge\n\t3. Dining Room\n\t4. Kitchen\n\t5. Ball Room\n\t6. Conservatory\n\t7. Billiard Room\n\t8. Library\n\t9. Study\n\t10. Skip\n\nEnter (1-10) : ";
                cin >> usrChoice2;
                switch (usrChoice2) {
                    case 1:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            rmHall = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            rmHall = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 2:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            rmLounge = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            rmLounge = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 3:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            rmDiningRm = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            rmDiningRm = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 4:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            rmKitchen = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            rmKitchen = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 5:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            rmBallRm = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            rmBallRm = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 6:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            rmConserv = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            rmConserv = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 7:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            rmBilliardRm = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            rmBilliardRm = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 8:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            rmLibrary = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            rmLibrary = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 9:
                        cout << "X or O? : ";
                        cin >> usrChoice3;
                        if (usrChoice3 == 'X') {
                            rmStudy = 'X';
                            break;
                        }
                        else if (usrChoice3 == 'O') {
                            rmStudy = 'O';
                            break;
                        }
                        else {
                            cout << "Not a valid response.\n\nX or O? : ";
                            cin >> usrChoice3;
                            break;
                        }
                    case 10:
                        break;
                        }
                cout << "Would you like to make more suspicions? y/n : ";
                cin >> extChoice;
        }
    }
    while (extChoice == 'y'); // Keeps running the switch statements until the player inputs 'n' for extChoice, found on line 518.
    if (extChoice == 'n') { // Stops the user from making more marks on the notes when they input 'n'.
        printNotes(colMust, profPlum, mrGreen, mrsPcock, msScar, mrsWhite, wpnKnife, wpnCandle, wpnPistol, wpnRope, wpnLead, wpnWrench, rmHall, rmLounge, rmDiningRm, rmKitchen, rmBallRm, rmConserv, rmBilliardRm, rmLibrary, rmStudy); // Prints the detective notes one more time.
    }
}

int main() {
    
    detectiveNotes(); // Prints the detective notes AND allows the user to mark deductions on the paper. This is different from printNotes(), as printNotes() just prints the detective notes without allowing the player to mark any deductions.
    
    return 0;
}

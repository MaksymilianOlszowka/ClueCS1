// Clue Player Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {                          
public:
    void PlayerMovement(int userMovement);
    void PlayerAccusation(char userAccusation);
    void PlayerSuggestion(char userSuggestion);
    void Print();

private:
    int movement;
    char accuse;
    char suggest;
};

// Creates the functions to move
void Player::PlayerMovement(int userMovement) {
    movement = userMovement;
}

// Sets the rating (1-5, with 5 best)
void Player::PlayerAccusation(char userAccusation) {
    accuse = userAccusation;
}

void Player::PlayerSuggestion(char userSuggestion) {
    suggest = userSuggestion;
}

void Player::Print() {
    cout << "Press x if you want to move:" << endl;
    cout << "Press y if you want to accuse:" << endl;
    cout << "Press z if you want to make a suggestion: " << endl;

}

int main() {

    Player Player1;
    Player1.Print();

    //I need help Q. im dying 

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

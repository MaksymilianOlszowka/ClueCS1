// Dice Roll Draft.cpp

#include <iostream>
#include <cstdlib>

int diceRoll()   {
    int roll;
    int min = 1; // The minimum number that the die will roll is 1
    int max = 6; // This maximum number that the die will roll is 6

    roll = rand() % 7; // Generates the number from the roll

    return roll;
}

int main()   {
    srand(time(NULL)); // Generates truly random number

    std::cout << diceRoll() << "\n"; // Prints diceRoll function and newline
}
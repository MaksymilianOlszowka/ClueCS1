// ClueMenuCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int numplayers;
	char playerchoice;
	int playermenu = 0;



	cout << "Welcome to the Game of Clue!" << endl;
	retry:
	cout << "How many players do you wish to play with? (Min: 2, Max: 6)" << endl;
	cin >> numplayers;
	if ((numplayers < 2) || (numplayers > 6))
	{
		cout << "Invalid amount of players, please retry" << endl; goto retry;
	}
	else
		numplayers = numplayers;
	cout << numplayers << " are playing, is this correct? (Y/N)" << endl;
	cin >> playerchoice;
	if (playerchoice == 'N')
	{
		goto retry;
	}
	else
		cout << "Alright players! Lets start the Game!" << endl;

	//this is where the case file is built and made
	//this is where the distrubte function goes for the cards

	do {
		cout << "Menue: " << endl << "1. View the Map" << endl << "2. View your Notes" << endl << "3. Roll/Move" << endl << "4. Suggest" << endl << "5. Final Accusation" << endl << "6. Quit" << endl;
		cin >> playermenu;
		if (playermenu == 1)
		{
			cout << "This is the Map: " << endl; // call up the map function Max is working on 
		}
		else
			cout << endl;
		if (playermenu == 2)
		{
			cout << "This is your Notes: " << endl; // pull up the note function that max completed
		}
		else
			cout << endl;
		if (playermenu == 3)
		{
			cout << "Press (CHARACTER) to roll: " << endl; // pull up that roll function that max completed
		}
		else
			cout << endl;
		if (playermenu == 4)
		{
			// cout << "This is the Map: " << endl; // this will pull up the suggestion function previously used
		}
		else
			cout << endl;
		if (playermenu == 5)
		{
			// cout << "This is the Map: " << endl; // this will be the final accusation that Aidan did
		}
		else
			cout << endl;
		if (playermenu == 6)
		{
			goto quit;
		}
		else
			cout << endl;

	} while (playermenu = 10);

quit:
	cout << "Thank you for playing the game!" << endl << "Do you wish to play again? (Y/N)" << endl;
	cin >> playerchoice;
	if (playerchoice == 'Y')
	{
		goto retry;
	}
	else
		cout << "Bye Loser! Hope you punch your mointor" << endl;
	
	
}

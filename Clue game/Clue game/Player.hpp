#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Player {
public:
    void SetPlayerLocation(int v, int h);
    int GetVerticalLocation(void);
    int GetHorizontalLocation(void);
    void SetActivePlayers(void);
    void SetPlayerInactive(void);
    bool CheckActive(void);
    void SetPlayerHand(string card);
    void GetPlayerHand(void);
    void PrintDetectiveNotes(Player players[], int currPlayer);
    void EditDetectiveNotes(int currPlayer, Player players[]);
    void SetPlayerMoveFinished(void);
    int GetPlayerMoveFinished(void);
    void SetPlayerSuggestFinished(void);
    int GetPlayerSuggestFinished(void);

private:
    string CardsInHand[9];
    bool Active = false;
    int numCards = 0;
    int vertical;
    int horizontal;
    int moveFinished = 0;
    int suggestFinished = 0;
    char colMust = ' ';
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

};

void funcSetActivePlayers(int numPlayers, Player players[]);

#endif /* Player_hpp */



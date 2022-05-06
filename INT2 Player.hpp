//
//  Player.hpp
//  Integration 2
//
//  Created by Maksymilian Olszowka on 5/5/22.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>

class Player {
public:
    int DiceRoll(void);
    void SetPlayerLocation(int v, int h);
    int GetVerticalLocation(void);
    int GetHorizonalLocation(void);
    void PrintNotes(char colMust, char profPlum, char mrGreen, char mrsPcock, char msScar, char mrsWhite, char wpnKnife, char wpnCandle, char wpnPistol, char wpnRope, char wpnLead, char wpnWrench, char rmHall, char rmLounge, char rmDiningRm, char rmKitchen, char rmBallRm, char rmConserv, char rmBilliardRm, char rmLibrary, char rmStudy);
    void DetectiveNotes(void);
    void PlayerSuggestion(void);
    
private:
    
   
};

#endif /* Player_hpp */

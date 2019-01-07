//
//  FBullCowGame.hpp
//  Bulls and Cows
//
//  Created by Charlie Sparks on 1/7/19.
//  Copyright © 2019 Charlie Sparks. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>

class FBullCowGame {
public:
    void Reset(); // TODO make a more rich return value
    int GetMaxTries();
    int GetCurrentTry;
    bool IsGameWon();
    bool CheckGuessValidity(string); // TODO make a more rich return value
    
    
// will add content later
private:
    
}

#endif /* FBullCowGame_hpp */

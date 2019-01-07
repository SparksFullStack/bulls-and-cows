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
#include <string>

class FBullCowGame {
public:
    void Reset(); // TODO make a more rich return value
    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon();
    bool CheckGuessValidity(std::string); // TODO make a more rich return value
    
    
// will add content later
private:
    int MyCurrentTry = 1;
    int MaxTries = 5;
};
#endif /* FBullCowGame_hpp */

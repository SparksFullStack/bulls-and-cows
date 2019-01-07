//
//  FBullCowGame.cpp
//  Bulls and Cows
//
//  Created by Charlie Sparks on 1/7/19.
//  Copyright © 2019 Charlie Sparks. All rights reserved.
//

#include <iostream>
#include "FBullCowGame.hpp"

// our getter methods for the private values on the class
int FBullCowGame::GetMaxTries() const { return MaxTries; };
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; };

void FBullCowGame::Reset()
{
    return;
};

bool FBullCowGame::IsGameWon()
{
    return false;
};

bool FBullCowGame::CheckGuessValidity(std::string)
{
    return false;
};

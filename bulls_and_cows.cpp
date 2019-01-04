#include <iostream>
#include <string>

using namespace std;

int main()
{
  constexpr int WORD_LENGTH = 5;
  cout << "Welcome to Bulls and Cows!\n";
  cout << "Guess the length of the word:\n";

  string Guess = "";
  cin >> Guess;

  cout << "Your guess was: " << Guess;

  return 0;
}
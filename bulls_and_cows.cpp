#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();

int main()
{
  PrintIntro();

  constexpr int NUMBER_OF_TURNS = 5;
  for (int guessNum = 1; guessNum <= NUMBER_OF_TURNS; guessNum++)
  {
    GetGuess();
    cout << endl;
  }

  return 0;
}

void PrintIntro()
{
  constexpr int WORD_LENGTH = 5;
  cout << "Welcome to Bulls and Cows!\n";
  cout << "Guess the word I'm thinking if; it's " << WORD_LENGTH;
  cout << " letters long..." << endl;
};

string GetGuess()
{
  string Guess = "";
  getline(cin, Guess);

  cout << "Your guess was: " << Guess << endl;
  return Guess;
};
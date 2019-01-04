#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

int main()
{
  do {
    PrintIntro();
    PlayGame();
  } while (AskToPlayAgain() == true);
  
  return 0;
}

void PrintIntro()
{
  constexpr int WORD_LENGTH = 5;
  cout << "Welcome to Bulls and Cows!\n";
  cout << "Guess the word I'm thinking if; it's " << WORD_LENGTH;
  cout << " letters long..." << endl;
};

void PlayGame()
{
  constexpr int NUMBER_OF_TURNS = 5;
  for (int guessNum = 1; guessNum <= NUMBER_OF_TURNS; guessNum++)
  {
    string Guess = GetGuess();
    cout << "Your guess was: " << Guess << endl;
    cout << endl;
  }
}

string GetGuess()
{
  string Guess = "";
  getline(cin, Guess);

  return Guess;
};

bool AskToPlayAgain()
{
  cout << "Would you like to play again? (yes/no)" << endl;
  string Response = "";
  getline(cin, Response);

  return (Response[0] == 'y') || (Response[0] == 'Y');
}
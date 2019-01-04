#include <iostream>
#include <string>

using namespace std;

void PrintIntro();

int main()
{
  PrintIntro();

  string Guess = "";
  getline(cin, Guess);

  cout << "Your guess was " << Guess << endl;

  return 0;
}

void PrintIntro()
{
  constexpr int WORD_LENGTH = 5;
  cout << "Welcome to Bulls and Cows!\n";
  cout << "Guess the word I'm thinking if; it's " << WORD_LENGTH;
  cout << " letters long..." << endl;
}
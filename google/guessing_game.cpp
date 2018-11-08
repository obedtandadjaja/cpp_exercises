// guessing_game: Obed Tandadjaja
// Description: guess secret number from 1-100

#include <iostream>
using namespace std;

int main() {
  int random_number;
  int guess;

  // initialize random seed
  srand(time(NULL));

  // generate random number between 1 and 100
  random_number = rand() % 100 + 1;

  do {
    cout << "Your guess: ";
    if(!(cin >> guess)) {
      cout << "Only accepts integers." << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    }
    if(guess > random_number) {
      cout << "You are higher." << endl;
    } else if(guess < random_number) {
      cout << "You are lower." << endl;
    }
  } while(guess != random_number);

  cout << "You are correct, " << random_number << " is the number" << endl;

  return 0;
}

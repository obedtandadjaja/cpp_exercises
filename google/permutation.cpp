// permutation: Obed Tandadjaja
// Description: How many ways can you arrange 6 different books, left to right, on a shelf?

#include <iostream>
using namespace std;

void permutate(string current, string characters) {
  if(characters.size() == 0) cout << current << endl;
  for(int i = 0; i < characters.size(); i++) {
    permutate(current + characters[i], characters.substr(0, i) + characters.substr(i + 1, characters.size()));
  }
}

int main() {
  permutate("", "123456");
}

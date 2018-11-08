// multiplication_matrix: Obed Tandadjaja
// Description: Multiplication matrix

#include <iostream>
using namespace std;

int main() {
  cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "" << endl;
  for(int base = 1; base < 10; base++) {
    cout << base << "| ";
    for(int multiplier = 1; multiplier < 10; multiplier++) {
      cout << base * multiplier << '\t';
    }
    cout << endl;
  }
  return 0;
}

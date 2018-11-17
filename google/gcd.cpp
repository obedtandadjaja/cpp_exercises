// gcd: Obed Tandadjaja
// Description: finds the GCD of 2 numbers

#include <iostream>
using namespace std;

int gcd(int num1, int num2) {
  if(num2 == 0) {
    return num1;
  }
  return gcd(num2, num1%num2);
}

int main() {
  int num1;
  int num2;

  cout << "First number: ";
  if(!(cin >> num1)) return 0;

  cout << "Second number: ";
  if(!(cin >> num2)) return 0;

  cout << gcd(num1, num2) << endl;
}

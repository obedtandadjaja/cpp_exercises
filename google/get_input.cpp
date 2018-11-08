// get_input.cpp: Obed Tandadjaja
// Description: cin to get input

#include <iostream>
using namespace std;

int main() {
  int input_var = 0;

  do {
    cout << "Enter a number (-1 = quit): ";

    // accepts input from keyboard into variable input_var
    // cin returns false if an input opreation fails, that is, if something
    // other than an int (the type of input_var) is entered.
    if(!(cin >> input_var)) {
      cout << "You entered a non-numeric." << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    }
    if(input_var != -1) {
      cout << "You entered " << input_var << endl;
    }
  } while(input_var != -1);

  cout << "All done." << endl;
  return 0;
}

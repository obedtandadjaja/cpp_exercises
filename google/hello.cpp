// hellp.cpp: Obed Tandadjaja
// Description: prints "Hello world"

# include <iostream>
# include <iomanip>
using namespace std;

int main() {
  cout << "Hello World!" << endl;

  for(int i = 0; i < 6; i++) { // rows
    for(int j = 0; j < 4; j++) { // columns
      // setw(int) sets the column width
      cout << setw(17) << "Hello world!";
    }
    cout << endl;
  }

  return 0;
}

#include <iostream>

int main() {
  using namespace std;

  int i;        //declaring integer variable
  float f;      //declaring float variable
  double d;     //declaring double variable
  char c;       //declaring character variable
  bool b, bl;   //decaring boolean variable;
  int y = 23;   //immediate assign

  //assigning values to these variables
  i = 45;
  f = 34.234;
  d = 34.43242343;
  c = 'g';
  b = true;
  bl = 5 < 4;

  cout << "int : " << i << endl;
  cout << "float : " << f << endl;
  cout << "double : " << d << endl;
  cout << "char : " << c << endl;
  cout << "b : " << b << endl;
  cout << "bl : " << bl << endl;
  cout << y << endl;
  cout << endl;

  // chars -> ascii
  char c1 = 'A';
  char c2 = 'a';
  char c3 = '0';
  cout << "ascii of A: " << int(c1) << endl;
  cout << "ascii of a: " << int(c2) << endl;
  cout << "ascii of 0: " << int(c3) << endl << endl;

  // type casting - explicit conversion
  float f1 = 1.2345;
  double d1 = 1.2345;
  cout << "float to int: " << int(f1) << endl;
  cout << "double to float: " << float(d1);
  cout << endl;

  // implicit conversion
  int i1 = 12;
  char c4 = 'a';
  cout << "12 + 'a' = " << i1 + c4 << endl;
  cout << endl;

  return 0;
}

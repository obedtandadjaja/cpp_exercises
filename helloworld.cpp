#include <iostream>

void print1() {
  // std = standard
  // << = output operator
  // std::endl = '\n'

  std::cout << "Hello world" << std::endl;
}

void print2() {
  using std::cout;

  cout << "Hello ";
  cout << "world" << std::endl;
}

void print3() {
  using namespace std;

  cout << "Hello" << endl;
  cout << "world" << endl;
}

int main() {
  print1();
  print2();
  print3();
  return 0;
}

#include <iostream>
using namespace std;

int main() {

  int base;
  cout << "Enter a base \n";
  cin >> base;

  int pow;
  cout << "Enter a power \n";
  cin >> pow;

  int acc = 1;

  while(pow > 0) {
    acc = base * acc;
    pow -= 1;
  }
  cout << acc;

  return 0;
}

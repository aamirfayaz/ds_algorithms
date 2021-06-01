#include <iostream>
using namespace std;


int calGCD(int n1, int n2) {
    if(n2 == 0) return n1;
    else return calGCD(n2, n1 % n2);
}

int main() {

  int n1, n2;

  cin >> n1;
  cin >> n2;

  cout << "\n";

  int gcd = calGCD(n1, n2);
  int lcm = n1 * n2 / gcd;

  cout << gcd << "\n";
  cout << lcm;

  return 0;
}

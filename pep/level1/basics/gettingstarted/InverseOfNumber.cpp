#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin>>n;
  int place = 1, acc = 0;
  while(n > 0) {
    acc = acc + (place * pow(10,  (n % 10) - 1));
    place += 1;
    n /= 10;
  }

  cout << acc;
  return 0;
}

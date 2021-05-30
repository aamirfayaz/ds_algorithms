#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int b;
  cin >> b;
  int pow = 1;
  int sum = 0;

  while(n > 0) {
    int rem = n % 10;
    sum = sum + (pow * rem);
    pow = pow * b;
    n = n / 10;
  }

  cout << sum;
  return 0;
}

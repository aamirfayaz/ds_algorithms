#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int b;
  cin >> b;
  int rem;
  int pow = 1;
  int sum = 0;
  while(n > 0) {
        rem = n % b;
        sum = sum + (rem * pow);
        pow = pow * 10;
        n = n / b;
  }
  cout << sum;
  return 0;
}

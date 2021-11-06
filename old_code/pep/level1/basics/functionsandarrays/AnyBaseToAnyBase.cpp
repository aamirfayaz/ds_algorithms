#include <iostream>
using namespace std;

long convertAnyBaseToBase10(long n, long b1) {
  long pow = 1;
  long sum = 0;

  while(n > 0) {
    long rem = n % 10;
    sum = sum + (pow * rem);
    pow = pow * b1;
    n = n / 10;
  }
  return sum;
}
long convertBase10ToAnyBase(long n, long b2) {

  long rem;
  long pow = 1;
  long sum = 0;
  while(n > 0) {
        rem = n % b2;
        sum = sum + (rem * pow);
        pow = pow * 10;
        n = n / b2;
  }
  return sum;
}
int main() {

  long n;
  cin >> n;
  long b1;
  cin >> b1;

  long b2;
  cin >> b2;

  long pow = 1;
  long sum = 0;

  long base10Number = convertAnyBaseToBase10(n, b1);
  long result = convertBase10ToAnyBase(base10Number, b2);

  cout << result;
  return 0;
}

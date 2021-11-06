#include <iostream>
using namespace std;

int main() {

  int b;
  cin >> b;
  int n1;
  cin >> n1;
  int n2;
  cin >> n2;

  int carry = 0;
  int pow = 1;
  int result = 0;

  while(n1 > 0 || n2 > 0 || carry > 0) {
    int d1 = n1 % 10;
    int d2 = n2 % 10;
    int sum = (carry + d1 + d2);
    int next = sum % b;
    carry = sum / b;
    result = result + (pow * next);
    pow = pow * 10;
    n1 = n1 / 10;
    n2 = n2 / 10;
  }

  cout << result;
  return 0;
}

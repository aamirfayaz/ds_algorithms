#include <iostream>
using namespace std;
/*
Constraints:
2 <= b <= 10

0 <= n1 <= 256

n1 <= n2 <= 256

*/
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
  int next = 0;
  //
  while(n1 > 0 || n2 > 0 || carry > 0) {
    int d1 = n1 % 10;
    int d2 = n2 % 10;
    d2 = d2 - carry;

    if(d2 < d1) {
       next = (b + d2) - d1;
       carry = 1;
    } else {
      next = d2 - d1;
      carry = 0;
    }

    result = result + (pow * next);
    pow = pow * 10;
    n1 = n1 / 10;
    n2 = n2 / 10;
  }

  cout << result;
  return 0;
}

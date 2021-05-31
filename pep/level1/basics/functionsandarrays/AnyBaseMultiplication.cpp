#include <iostream>
using namespace std;
/*
Constraints:
2 <= b <= 10
0 <= n1 <= 10000
0 <= n2 <= 10000

*/

long anyBaseSum(int b, int n1, int n2) {

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
  return result;
}

int main() {

  long b;
  cin >> b;
  long n1;
  cin >> n1;
  long n2;
  cin >> n2;

   long result = 0;
   long raisePow = 1;
  //
  while(n2 > 0) {

    long carry = 0;
    long mul = 0;
    long sum = 0;

    long d2 = n2 % 10;
    long temp = n1;
    long pow = 1;

    while(temp > 0 || carry > 0) {
      long d1 = temp % 10;
      mul = d1 * d2;
      mul = mul + carry;
      long rem = mul % b;
      sum = sum + (pow * rem);
      carry = mul / b;
      pow = pow * 10;
      temp = temp / 10;
    }

    sum = sum * raisePow;
    result = anyBaseSum(b, result, sum);
     raisePow = raisePow * 10;
     n2 = n2 / 10;

  }

  cout << result;





  return 0;
}

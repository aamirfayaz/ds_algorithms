#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int d;
  cin >> d;

  int count = 0;

  while(n > 0) {
    if(n % 10 == d) {
      count++;
    }
    n /= 10;
  }

  cout << count;
  return 0;

}

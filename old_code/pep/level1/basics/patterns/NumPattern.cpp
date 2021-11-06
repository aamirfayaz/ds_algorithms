#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter a n:";
  cin >> n;

  int sp = n / 2;
  int nP = 1;
  int base = 1;

  for(int i = 1; i <= n; i++) {
     int val = base;
      for(int j = 1; j <= sp; j++) {
        cout << "\t";
      }
      for(int j = 1; j <= nP; j++) {
        cout << val << "\t";
        val = val + 1;
      }

      if(i <= n / 2) {
        sp = sp - 1;
        nP = nP + 2;
        base = base + 1;
      } else {
        sp = sp + 1;
        nP = nP - 2;
        base = base - 1;
      }
      cout << "\n";
  }
  return 0;
}

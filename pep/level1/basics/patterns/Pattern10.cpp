#include <iostream>
using namespace std;
/*
       *
    *       *
*               *
    *       *
        *    
*/
int main() {

  int n;
  cout << "Enter n: \n";
  cin >> n;

  int sp1 = n / 2;
  int sp2 = -1;

  for(int i = 1; i <= n; i++) {

    for(int j = 1; j <= sp1; j++) {
        cout << "\t";
    }
    cout << "*";

    if(sp2 > 0) {
      for(int j = 1; j <= sp2; j++) {
        cout << "\t";
      }
      cout << "\t*";
    }
    if(i <= n / 2) {
      sp1 = sp1 - 1;
      sp2 = sp2 + 2;
    } else {
      sp1 = sp1 + 1;
      sp2 = sp2 - 2;
    }
    cout << "\n";
  }
  return 0;
}

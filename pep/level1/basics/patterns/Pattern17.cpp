#include <iostream>
using namespace std;
/*
*
*	*
*	*	*	*	*
*	*
*
*/
int main() {

  int n;
  cout << "Enter n:";
  cin >> n;

  int sp = n / 2;
  int c = 1;

  for(int i = 1; i <= n; i++) {


      for(int j = 1; j <= sp; j++) {
         if(i == sp + 1) {
           cout << "*" << "\t";
        } else {
         cout << "\t";
       }
     }

    for(int j = 1; j <= c; j++) {
      cout << "*" << "\t";
    }

    if(i <= n / 2) {
      c += 1;
    } else {
      c -= 1;
    }
    cout << "\n";

  }
  return 0;
}

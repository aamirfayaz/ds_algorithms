#include <iostream>
using namespace std;
/*
   1
 2 3	2
3	4	5	4	3
 2 3	2
   1
*/
int main() {

  int n;
  cout << "Enter n:";
  cin >> n;

  int sp = n / 2;
  int x = 1;
  int val1 = 1;
  int val2 = 2;

  for(int i = 1; i <= n; i++) {

     for(int j = 1; j <= sp; j++) {
       cout << "\t";
     }
     val2 = val1;
     for(int j = 1; j <= x; j++) {
       cout << val2 << "\t";

       if(j <= x / 2)
         val2 += 1;
      else
        val2 -= 1;
     }

     if(i <= n / 2) {
       val1 += 1;
       sp -= 1;
       x += 2;
     } else {
        val1 -= 1;
        sp += 1;
        x  -= 2;
     }

     cout << "\n";

  }
  return 0;
}

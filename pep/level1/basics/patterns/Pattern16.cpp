#include <iostream>
using namespace std;
/*
1												1
1	2										2	1
1	2	3								3	2	1
1	2	3	4						4	3	2	1
1	2	3	4	5				5	4	3	2	1
1	2	3	4	5	6		6	5	4	3	2	1
1	2	3	4	5	6	7	6	5	4	3	2	1
*/

int main() {

  int n;
  cout << "Enter n:";
  cin >> n;

  int sp = 2 * n - 3;
  int val;
  int c = 1;

  for(int i = 1; i <= n; i++) {
     val = 1;

     for(int j = 1; j <= c; j++) {
       cout << val << "\t";
       val += 1;
     }

     for(int j = 1; j <= sp; j++) {
       cout << "\t";
     }

     if(i == n) {
       c = c - 1;
       val = val - 1;
     }

     for(int j = 1; j <= c; j++) {
       val = val - 1;
       cout << val << "\t";
     }


   sp -= 2;
   c += 1;
   cout << "\n";

  }
  return 0;
}

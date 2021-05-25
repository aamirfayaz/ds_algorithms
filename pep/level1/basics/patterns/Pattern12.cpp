#include <iostream>
using namespace std;

/*
0
1	1
2	3	5
8	13	21	34
55	89	144	233	377
*/
int main() {

  int n;
  cout << "Enter a number :";
  cin >> n;

  int curr = 0;
  int next = 1;

  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
      cout << curr << "\t";
      int sum = curr + next;
      curr = next;
      next = sum;
    }
    cout << "\n";
  }
  return 0;
}

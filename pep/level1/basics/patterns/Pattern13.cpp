#include <iostream>
using namespace std;
/*
https://math.stackexchange.com/questions/4149946/proof-of-binom-nk1-binom-n-k-cdot-fracn-kk1
(n k+1)=(n k)⋅n−k / k+1
1
1	1
1	2	1
1	3	3	1
1	4	6	4	1
*/

int main() {

  int n;
  cout << "Enter n:";
  cin >> n;

  for(int i = 0; i < n; i++) {
    int coff = 1;
    cout << coff << "\t";
     for(int j = 0; j < i; j++) {
       coff = (coff * (i - j))/ (j + 1);
       cout << coff << + "\t";
    }
    cout << "\n";
  }
  return 0;
}

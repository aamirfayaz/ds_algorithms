#include <iostream>
using namespace std;
/*
k = 2
1 2 3 4 5
Right rotation: 4 5 1 2 5
left rotation[clockwise]: 3 4 5 1 2

also if k = -1 and n = 5, then k = -1 == k = 4

*/

void gfg_solution_2(int a [], int n, int k) {

}

void pep_coding_solution_1(int a [], int n, int k) {


Rotate the array a, k times to the right (for positive values of k), and to
the left for negative values of k.
*/
  k = k % n;
  if(k < 0) k = n + k;

  int res[n];

  int i = 0, j = n - k;

  while(j < n) {
    res[i] = a[j];
    i++;
    j++;
  }


  int x = 0;
  while(x < (n - k)) {
    res[i] = a[x];
    i++;
    x++;
  }


  for(int i = 0; i < n; i++) {
    cout << res[i] << "\t";
  }
}

void pep_coding_solution_2(int a [], int n, int k) {

  k = k % n;
  if(k < 0) k = n + k;

  int res[n];

  int i = 0, j = k;

  while(j < n) {
    res[i] = a[j];
    i++;
    j++;
  }


  int x = 0;
  while(x < k) {
    res[i] = a[x];
    i++;
    x++;
  }


  for(int i = 0; i < n; i++) {
    cout << res[i] << "\t";
  }
}

void gfg_solution_1(int a [], int n, int k) {
  /*
  Time complexity : O(n * d)
  Auxiliary Space : O(1)
  */

}
void left_rotate_one_by_one_gfg_solution_2(int a [], int n, int k) {
  /*
  Time complexity : O(n * d)
  Auxiliary Space : O(1)
  */

  for(int i=0;io)
}


int main() {

  int n;
  cin >> n;

  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int k;
  cin >> k;
 pep_coding_solution_1(a, n, k);
 cout << "\n" << "-------sep------" << "\n";
 pep_coding_solution_2(a, n, k);
   return 0;
}

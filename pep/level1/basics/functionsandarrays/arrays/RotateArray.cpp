#include <iostream>
using namespace std;
/*
k = 2
1 2 3 4 5
Right rotation: 4 5 1 2 5
left rotation[clockwise]: 3 4 5 1 2

also if k = -1 and n = 5, then k = -1 == k = 4

*/

void pep_coding_solution_1(int a [], int n, int k) {

/*
  by using a temp array
 time-complexity:
 space-complexity:
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

/*
  by rotating each element one by one
 time-complexity:
 space-complexity:
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
void pep_coding_solution_3(int a [], int n, int k) {

/*
 using array reversal
 time-complexity:
 space-complexity: O(1)
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
void pep_coding_solution_4(int a [], int n, int k) {
/*
 using juggling algorithm
 time-complexity:
 space-complexity:
*/
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

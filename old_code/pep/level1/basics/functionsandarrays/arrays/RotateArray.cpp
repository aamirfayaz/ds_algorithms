#include <iostream>
using namespace std;
/*
k = 2
1 2 3 4 5
Right rotation: 4 5 1 2 5
left rotation[clockwise]: 3 4 5 1 2

also if k = -1 and n = 5, then k = -1 == k = 4

in below functions, we will be implementing left rotation.
*/

void reverse(int a[], int start, int end) {
  int temp = 0;
    while(start < end) {
      temp = a[start];
      a[start] = a[end];
      a[end] = temp;
      start++;
      end--;
    }
}

int gcd_calc(int n1, int n2) {
  if(n2 == 0) return n1;
  else return gcd_calc(n2, n1 % n2);
}


void gfg_solution_1(int a [], int n, int k) {

/*
 by using a temp array
 time-complexity: O(n)
 space-complexity: O(k)
*/
  k = k % n;
  if(k < 0) k = n + k;

  int temp[k];

  for(int i=0;i<k;i++) {
    temp[i] = a[i];
  }

  int i = 0;
  while((i+k) < n) {
    a[i] = a[i+k];
    i++;
  }

  int j = 0;
  while(j<k) {
    a[i] = temp[j];
    j++;
    i++;
  }

  for(int i = 0; i < n; i++) {
    cout << a[i] << "\t";
  }
}
void gfg_solution_2(int a [], int n, int k) {

/*
 by rotating each element one by one by using a temp variable.
 Time complexity : O(n * d)
 Auxiliary Space : O(1)
*/
  k = k % n;
  if(k < 0) k = n + k;

  for(int i=0;i<k;i++) {
    int temp = a[0];
    int j = 0;
    while(j<n-1) {
      a[j] = a[j+1];
      j++;
    }
    a[j] = temp;
  }

  for(int i = 0; i < n; i++) {
    cout << a[i] << "\t";
  }
}
void gfg_solution_3(int a [], int n, int k) {

/*
 using array reversal
 Time complexity : O(n)
 Auxiliary Space : O(1)
*/
  k = k % n;
  if(k < 0) k = n + k;

  reverse(a, 0, k - 1);
  reverse(a, k + 1, n - 1);
  reverse(a, 0, n - 1);



  for(int i = 0; i < n; i++) {
    cout << a[i] << "\t";
  }
}
void gfg_solution_4(int a [], int n, int k) {
/*
 using juggling algorithm
 time-complexity: O(n)
 space-complexity: O(1)
*/
  k = k % n;
  if(k < 0) k = n + k;

  int gcd = gcd_calc(n, k);
  int d = 0;
  for(int i=0;i<gcd;i++) {
    int temp = a[i];
    int j = i;
    while(1) {
      d = j + k;
      if(d >= n) d = d - n;
      if(d == i) break;
      a[j] = a[d];
      j = d;
    }
    a[j] = temp;
  }

  for(int i = 0; i < n; i++) {
    cout << a[i] << "\t";
  }
}
int main() {

  int n;
  cin >> n;

  int a[n];
  for(int i=0;i<n;i++) {
    cin>>a[i];
  }

  int k;
  cin>>k;
 gfg_solution_4(a, n, k);


 return 0;
}

#include <iostream>
using namespace std;
/*
Add two numbers represented by two arrays
*/
int main() {

  int n1;
  cin >> n1;

  int arr1[n1];
  for(int i = 0; i < n1; i++) {
    cin >> arr1[i];
  }
  cout << "-----------" << "\n";
  int n2;
  cin >> n2;

  int arr2[n2];
  for(int i = 0; i < n2; i++) {
    cin >> arr2[i];
  }

  cout << "=====" << "\n";


  int n = (n1 > n2) ? n1 : n2;

  int arr3[n];
  int idx = n;
  n1--;
  n2--;
  n--;
  int carry = 0;
  int sum = 0;

  while(n1 >= 0  && n2 >= 0) {

    sum = carry + arr1[n1] + arr2[n2];
    int carry = sum % 10;
    arr3[n] = sum / 10;
    n1--;
    n2--;
    n--;
  }

    while(n1 >= 0) {
      sum = carry + arr1[n1];
      int carry = sum % 10;
      arr3[n] = sum / 10;
      n--;
      n1--;
    }

    while(n2 >= 0) {
      sum = carry + arr1[n2];
      int carry = sum % 10;
      arr3[n] = sum / 10;
      n--;
      n2--;
    }

    for(int i = 0; i < idx; i++) {
      cout << arr3[i] << "\t";
    }

   return 0;
}

#include <iostream>
using namespace std;

int max(int arr[], int n) {
  int max = arr[0];
  for(int i = 0; i < n; i++) {
    if(arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int main() {

  int n;
  cin >> n;

  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
   int m = max(arr, n);

  for(int i = 0; i < m; i++) {

      for(int j = 0; j < n; j++) {
        if((m - i) <= arr[j]) {
          cout << "*" << "\t";
        } else {
          cout << "\t";
        }
      }
      cout << "\n";
  }
  return 0;
}

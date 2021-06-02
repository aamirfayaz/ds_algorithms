#include <iostream>
using namespace std;


int main() {

  int n;
  cin >> n;

  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int start = 0, end = n - 1,temp = 0;

  for(int i = 0; i < n; i++) {

    if(start < end) {
      temp = a[start];
      a[start] = a[end];
      a[end] = temp;
    } else {
      break;
    }

    start++;
    end--;

  }


  for(int i = 0; i < n; i++) {
    cout << a[i] << "\t";
  }
   return 0;
}

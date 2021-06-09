#include <iostream>
using namespace std;

int main() {

  int n, k;
  cin>>n;
  int a[n];

  for(int i=0;i<n;i++) {
    cin>>a[i];
  }

  cin>>k;
  int low = 0, high = n - 1, mid;

  while(low <= high) {
    mid = low + (high - low) / 2;
    if(a[mid] < coin) {
       low = mid + 1;
    } else if(a[mid] > coin) {
       high = mid - 1;
    } else {
       while()
       break;
    }
  }

  cout << floor << " " << ceil;

  return 0;
 }

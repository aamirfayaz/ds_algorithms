#include <iostream>
using namespace std;

int binarySearch(int a[], int low, int high, int key) {
  if(low <= high) {

  int mid = low + (high - low) / 2;
  if(a[mid] == key)
     return 1;
  if(a[mid] < key) return binarySearch(a, mid+1, high, key);
  else return binarySearch(a, low, high-1, key);
  }
  return -1;

}
int main() {

  int a[] = {1,2,3,4,5,6};
  int n = sizeof(a) / sizeof(a[0]);
  int key;
  cin>>key;
  int res = binarySearch(a, 0, n-1,key);
  cout << res;
  return 0;
}

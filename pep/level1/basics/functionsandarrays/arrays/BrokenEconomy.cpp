#include <iostream>
using namespace std;

int main() {

  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) {
    cin>>a[i];
  }

  int coin;
  cin>>coin;

  int i = 0;
  while(a[i] <= coin) {
    if(a[i] == coin) {
      cout << coin;
      break;
    }
    i++;
  }

  if(a[i] > coin) {
    cout << a[i - 1] << "\t" << a[i];
  }
  return 0;
}

#include <iostream>
using namespace std;

int main() {

  int n;
  cin>>n;
  for(int div=2;div<=n;div++) {
    while(n%div==0) {
      cout << div << endl;
      n=n/div;
    }
  }
  return 0;
}

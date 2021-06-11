#include <iostream>
using namespace std;

int main() {

  int n;
  int t = 4;
     while(t > 0) {
      cin>>n;
        int div = 2;
        while((div*div)<n) {
        if(n%div == 0) {
           break;
        }
        div++;
      }
      if((div * div) > n)
      cout << "prime number" << endl;
      else
      cout << "not a prime number" << endl;

      t--;
}

  return 0;
}

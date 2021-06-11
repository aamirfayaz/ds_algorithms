#include <iostream>
using namespace std;

int main() {

  int low, high;

      cin>>low;
      cin>>high;

      int div = 2;
      while(low <= high) {
        int div = 2;
        while((div*div)<low) {
        if(low%div == 0) {
           break;
        }
        div++;
      }

      if((div * div) > low)
      cout << low << endl;
      low++;
    }


  return 0;
}

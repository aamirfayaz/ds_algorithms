#include <iostream>
using namespace std;

int main() {

  int n;
  cin>>n;
  int curr=0,next=1,sum=1;

  for(int i=0;i<n;i++) {
    cout << curr << "\t";
    curr=next;
    next=sum;
    sum=curr+next;
  }
  
  return 0;
}

#include <iostream>
using namespace std;

void leftToRightPrint(int n) {

 //left to right
  if(n>0) {
    int rem = n % 10;
    leftToRightPrint(n / 10);
    cout << rem << " ";
  }
}
int main() {

  int n;
  cin>>n;
  leftToRightPrint(n);
   cout << endl;
  //right to left
  while(n != 0) {
    cout << (n%10) << " ";
    n=n/10;
  }


  return 0;
}

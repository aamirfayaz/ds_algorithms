#include <iostream>

/*
swastika

*/
using namespace std;

int main() {

  int n;
  cin >> n;

  int sp  = 0;
  int c = n;

   for(int i = 1; i <= n; i++) {

   for(int j = 1; j <= n; j++) {

      //handle first row
       if(i == 1) {
         if(j == n || j <= n / 2 + 1) {
           cout << "*" << "\t";
         } else {
           cout << "\t";
         }
       } else if(i <= n / 2) { // handle row between first and middle
         if(j == n || j == n / 2 + 1){
           cout << "*" << "\t";
         } else {
           cout << "\t";
         }
       } else if(i == n / 2 + 1) { // handle middle row
         cout << "*" << "\t";
       } else if(i < n) {//handle row between last and middle
           if(j == 1 || j == n / 2 + 1) {
           cout << "*" << "\t";
         } else {
          cout << "\t";
         }
       } else { // handle last row
         if(j == 1 || j >= n / 2 + 1) {
           cout << "*" << "\t";
         } else {
           cout << "\t";
         }
       }

   }
    cout << "\n";
  }
  return 0;
}

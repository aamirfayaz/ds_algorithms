/*
2.1 for marks above 90, print excellent.
2.2 for marks above 80 and less than equal to 90, print good.
2.3 for marks above 70 and less than equal to 80, print fair.
2.4 for marks above 60 and less than equal to 70, print meets expectations.
2.5 for marks less than equal to 60, print below par.

*/


#include <iostream>
using namespace std;

int main() {

   int m;
   cin>>m;
   if(m > 90) {
     cout("excellent");
   } else if (m > 80 && m <= 90){
    cout("good");
   } else if (m > 70 && m <= 80) {
     cout("fair");
   } else if (m > 60 && m <= 70) {
    cout("meets expectations");
   } else {
     cout("below par");
   }
   cout("end of program");
  return 0;
}

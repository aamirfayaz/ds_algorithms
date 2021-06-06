#include <iostream>
using namespace std;

int main() {

    // a = 5(00000101), b = 9(00001001)
  //  unsigned char a = 5, b = 9;

    // The result is 00001010
  //  printf("a<<1 = %d\n", a<<1);

    // The result is 00010010
    //printf("b<<1 = %d\n", b<<1);

   if(0) {
     cout << "hrr";
   }
    cout << (1 & 1) << "\n";
    cout << (1 & 3) << "\n";
    cout << (3 & 1) << "\n";
    cout << (7 & 1) << "\n";
    cout << (9 & 1) << "\n";
    cout << (4 & 1) << "\n";


    cout << (7 & 7) << "\n";
    cout << (4 & 7) << "\n";

cout << (2 & 1) << "\n";
cout << (1 & 2) << "\n";

cout << (0 & 2) << "\n";
cout << (0 & 3) << "\n";

cout << (2 & 4) << "\n";
cout << (4 & 4) << "\n";
  return 0;
}

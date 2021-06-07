#include <iostream>
using namespace std;

int main() {

    //a = 5(00000101), b = 9(00001001)
   unsigned char a = 5, b = 9;

    //The result is 00001010
   printf("a<<1 = %d\n", a<<1);

    //The result is 00010010
    printf("b<<1 = %d\n", b<<1);

    cout << "1<<1 : " << (1<<1) << endl; // 1 * 2 pow 1
    cout << "1<<2 : " << (1<<2) << endl; // 1 * 2 pow 2
    cout << "1<<3 : " << (1<<3) << endl; // 1 * 2 pow 2


  return 0;
}

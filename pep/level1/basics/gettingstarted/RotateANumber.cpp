#include <iostream>
using namespace std;

int main() {
//right rotation
// n=12345, k=2 :- 45123
	 int n,k;
	 cin>>n>>k;

     int temp = n;
     int nod = 0;

     while(temp != 0) {
       nod += 1;
       temp /= 10;
     }

     k = k % nod;
     if (k < 0) k = nod + k;

     int div = 1, mul = 1;
     for(int i = 1; i <= nod; i++) {
       if(i <= k) {
         div *= 10;
       } else {
         mul *= 10;
       }
     }


     int rem = n % div;
     int quo = n / div;

     int acc = (rem * mul) + quo;
     cout << acc;
	return 0;
}
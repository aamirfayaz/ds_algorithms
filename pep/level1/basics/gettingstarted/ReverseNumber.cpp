#include <iostream>
using namespace std;

int main() {

	int n;
	cin>>n;

    int rev=0, mod=0;
    while(n>0) {
    	 rem = n%10;
    	 rev = rem + (rev * 10);
    	 n/=10;
    }
    cout << rev;	 
	return 0;
} 
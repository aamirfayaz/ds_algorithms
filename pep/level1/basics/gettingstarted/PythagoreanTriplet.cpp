#include <iostream>
using namespace std;

int main() {

	int a,b,c;
	cin>>a>>b>>c;

	int max=a;
	if(b>max) max=b;
	if(c>max) max=c;

	if(a==max) {
		cout << ((a * a) == ((b * b) + (c * c)));
	} else if(b==max) {
		cout << ((b * b) == ((a * a) + (c * c)))
	} else {
		cout << ((c * c) == ((b * b) + (a * a)))
	}	 
	return 0;
}
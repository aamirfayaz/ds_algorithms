#include <iostream>
using namespace std;
/**

        *
      * *
   *  * *
  * * * *
* * * * *

**/
int main() {

	int n;
	cin>>n;
	int sp;

   cout << "n is :" << n;
	for(int i=1;i<=n;i++) {
		for(int sp=n-i;sp>0;sp--) {
			cout << "\t";
		}
		for(int j=i;j>0;j--) {
			cout << "*"<<"\t";
		}
		cout << endl;
	}
	return 0;
}
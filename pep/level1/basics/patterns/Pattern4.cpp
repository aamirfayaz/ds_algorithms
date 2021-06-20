#include <iostream>
using namespace std;
/*

*	*	*	*	*
	*	*	*	*
		*	*	*
			*	*
				*
*/
int main() {

	int n;
	cin>>n;
	int sp;

	for(int i=1;i<=n;i++) {
		for(int sp=i-1;sp>0;sp--) {
			cout << "\t";
		}
		for(int j=i;j<=n;j++) {
			cout << "*"<<"\t";
		}
		cout << endl;
	}
	return 0;
}
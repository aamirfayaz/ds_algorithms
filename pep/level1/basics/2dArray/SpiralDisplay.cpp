#include <iostream>
using namespace std;

int main() {
	int r,c;
	cin>>r>>c;
	int a[r][c];

	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++) {
			cin>>a[i][j];
		}
	}

	for(int i=0;i<r;i++) {
		cout << a[i][0] << endl;
	}

	for(int i=1;i<c;i++) {
		cout << a[r-1][i]<< endl;
	}	

	for(int i=r-2;i>=0;i--) {
		cout << a[i][c-1]<< endl;
	}

	for(int i=c-2;i>=0+1;i--) {
		cout << a[0][i]<< endl;
	}

	return 0;
}
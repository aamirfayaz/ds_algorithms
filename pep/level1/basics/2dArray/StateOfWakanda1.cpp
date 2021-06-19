#include <iostream>
using namespace std;

int main() {

	int r, c;
	cin>>r>>c;
	int a[r][c];
	
	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++) {
			cin>>a[i][j];
		}
	}

   for(int i=0;i<c;i++) {
   		if(i % 2 == 0) {
   			for(int k=0;k<r;k++) {
   				cout << a[k][i] << endl;
   			}
   		} else {
   			for(int k=r-1;k>=0;k--) {
   				cout << a[k][i] << endl;
   			}
   		}
   }
	return 0;
}
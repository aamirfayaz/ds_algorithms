#include<iostream>
using namespace std;
int main() {

//matric is a square matrix, i.e r = c
	int r,c;
	cin>>r>>c;
	int a[r][c];

	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++) {
			cin>>a[i][j];
		}
	}
   
   for(int i=0;i<c;i++) {
   	 for(int j=r-1;j>=0;j--) {
   	 	cout << a[j][i] << " ";
   	 }
   	 cout << endl;
   }



	
	return 0;
}
#include<iostream>
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
   
    int dir=0;
    int i=0;
    int j=0;
	while(true) {

		if(a[i][j] == 1) {
			dir = ++dir%4;
		}

		if(dir==0) {
			j++;
		} else if(dir==1) {
			i++;
		} else if(dir==2) {
			j--;
		} else if(dir == 3){
			i--;
		}

		if(i<0) {
			cout << ++i << endl << j;
			break;
		} else if(j<0) {
			cout << i << endl << ++j;
			break;
		} else if(i == r) {
			cout << --i << endl << j;
			break;
		} else if(j == c) {
			cout << i << endl << --j;
			break;
		}

	}

	return 0;
}
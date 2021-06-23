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

	//first transpose the array i.e r -> c
	for(int i=0;i<r;i++) {
		for(int j=i;j<c;j++) {
			int temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}

	cout << "---------------" << endl;
	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++) {
			cout<<a[i][j] << " ";
		}
		cout << endl;
	}

	//now reverse each row of the transposed array
	for(int i=0;i<r;i++) {
		int low = 0, high = r-1;
		while(low<high) {
			int temp=a[i][low];
			a[i][low]=a[i][high];
			a[i][high]=temp;
			low++;
			high--;
		}
	}
cout << "---------------" << endl;
	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++) {
			cout<<a[i][j] << " ";
		}
		cout << endl;
	}
  	return 0;
}
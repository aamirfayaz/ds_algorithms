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

	int minr=0;
	int minc=0;
	int maxc=c-1;
	int maxr=r-1;
	int count=0;
	int total=r*c;

	while(count<total) {
		
		for(int i=minr,j=minc;i<=maxr && count<total;i++) {
			cout<<a[i][j]<<endl;
			count++;
		}
		minc++;
		for(int i=minc,j=maxr;i<=maxc && count<total;i++) {
			cout<<a[j][i]<<endl;
			count++;
		}
		maxr--;
		for(int i=maxr,j=maxc;i>=minr && count<total;i--) {
			cout<<a[i][j]<<endl;
			count++;
		}
		maxc--;
		for(int i=maxc,j=minr;i>=minc && count<total;i--) {
			cout<<a[j][i]<<endl;
			count++;
		}
		minr++;
	}

	

	return 0;
}
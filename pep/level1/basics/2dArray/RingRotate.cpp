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
	
	int s,r;
	cin>>s>>r;

	int minr=0;
	int minc=0;
	int maxr=r-1;
	int maxc=c-1;

	if(s == 1)
	return 0;
}
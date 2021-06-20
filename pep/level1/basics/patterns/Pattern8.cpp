#include<iostream>
using namespace std;

/**
Sample Output

        *
      *
    *
  *
*

**/

int main() {

    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++) {
    	for(int j=i;j<=n;j++) {
            if(j==n)
    		cout << "*";
            else
             cout << "\t";
        }
        cout << endl;
    }
	return 0;
}
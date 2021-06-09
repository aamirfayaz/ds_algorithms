#include<iostream>
using namespace std;
int main()
{
      int n;
      cin>>n;
      int m;
      cin>>m;

      int  a[n][m];
    //  cout<<"\n2D Array Input:\n";
      for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            //cout<<"\ns["<<i<<"]["<<j<<"]=  ";
            cin>>a[i][j];
        }
      }

    //  cout<<"\nThe 2-D Array is:\n";
      for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<a[i][j] << " ";
        }
        cout<<endl;
      }
      return 0;
}

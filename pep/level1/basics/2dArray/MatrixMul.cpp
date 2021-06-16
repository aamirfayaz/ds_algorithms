#include<iostream>
using namespace std;
int main()
{
      int m;
      cin>>m;
      int n;
      cin>>n;

      int a[m][n];
    //  cout<<"\n2D Array Input:\n";
      for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            //cout<<"\ns["<<i<<"]["<<j<<"]=  ";
            cin>>a[m][n];
        }
      }

    //  cout<<"\nThe 2-D Array is:\n";
      for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<a[m][n] << " ";
        }
        cout<<endl;
      }
      return 0;
}

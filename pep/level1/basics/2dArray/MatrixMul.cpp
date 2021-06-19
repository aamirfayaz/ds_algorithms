#include<iostream>
using namespace std;
/*
Time complexity: O(n3). It can be optimized using Strassen’s Matrix Multiplication
Auxiliary Space: O(r1 * c2)
*/
int main() {

      int r1;
      cin>>r1;
      int c1;
      cin>>c1;
      int a[r1][c1];

      int r2;
      cin>>r2;
      int c2;
      cin>>c2;
      int b[r2][c2];

      /*
        a = 2 * 3, b = 3 * 4, c = 2 * 4
        a = 2 * 3, b = 3 * 1, c = 2 * 1
      */
      int c[r1][c2];

      if(c1 != r2) {
        cout << "Invalid input";
        return 0;
      }

      for(int i=0;i<r1;i++) {
        for(int j=0;j<c1;j++) {
            cin>>a[i][j];
        }
      }

      for(int i=0;i<r2;i++) {
        for(int j=0;j<c2;j++) {
            cin>>b[i][j];
        }
      }

      for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++) {
          c[i][j] = 0;
          for(int k=0;k<c1;k++) {
            cout << "c[" << i << "]" << "[" << j << "]" <<c[i][j] << endl;
            c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
          }
        }
      }


      for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++) {
            cout << c[i][j] << " ";
        }
        cout<<endl;
      }
      return 0;
}

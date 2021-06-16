#include<iostream>
using namespace std;
int main()
{
      int a1;
      cin>>a1;
      int a2;
      cin>>a2;
      int a[a1][a2];

      int b1;
      cin>>b1;
      int b2;
      cin>>b2;
      int b[b1][b2];

      int c[a1][a2];

      int sum;

      for(int i=0;i<a1;i++) {
        for(int j=0;j<a2;j++) {
            cin>>a[i][j];
        }
      }

      for(int i=0;i<b1;i++) {
        for(int j=0;j<b2;j++) {
            cin>>b[i][j];
        }
      }

       for(int i=0;i<a1;i++) {
        for(int j=0;j<a2;j++) {
            cout << a[i][j] << " ";
        }
        cout<<endl;
      }

      cout << endl;

      for(int i=0;i<b1;i++) {
        for(int j=0;j<b2;j++) {
            cout << b[i][j] << " ";
        }
        cout<<endl;
      }

      cout << endl << "Mult. array" << endl;

      for(int i=0;i<a1;i++) {
        for(int j=0;j<b1;j++) {
          sum=0;
          for(int k=0;k<b2;k++) {
            sum = sum + (a[i][k] * b[k][j]);
          }
          c[i][j] = sum;
        }
      }


      for(int i=0;i<a1;i++) {
        for(int j=0;j<a2;j++) {
            cout << c[i][j] << " ";
        }
        cout<<endl;
      }
      return 0;
}

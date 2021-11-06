#include <iostream>
#include <string.h>
using namespace std;
/*
Expected Time Complexity: O(N + M).
Expected Auxiliary Space: O(N + M).

*/

class Solution{
    public:

    string calc_util(int a[], int n, int b[], int m) {

        int sum[n];
        int i = n - 1, j = m - 1, k = n - 1;
        int curr = 0, c = 0;

        while(j >= 0) {

          curr = a[i] - c;
          if(curr < b[j]) {
            sum[k] = (curr + 10) - b[j];
            c = 1;
          } else {
            sum[k] = curr - b[j];
            c = 0;
          }

          cout << "curr : " << curr << endl;
          cout << "sum[k] " << sum[k] << endl;

          i--;
          j--;
          k--;
        }

        while(i >= 0) {
          sum[k] = a[i] - c;
           cout << "sum[k] " << sum[k] << endl;
          c = 0;
          i--;
          k--;
        }
        cout << "\n" << "----------" << "\n";
        for(int i = 0; i < n; i++) {
            cout << sum[i] << "\t";
        }

        string ans = "";
        char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};


        for(int i = 0; i <= n - 1; i++) {
           ans += digits[sum[i]];
        }
        if(ans[0] == '0')
          ans = ans.substr(1);

         return ans;


    }

    //wrapper
    string calc_diff(int *a,int n,int *b,int m){

     if(n >= m)
      return calc_util(a, n, b, m);
     else
     return calc_util(b, m, a, n);

    }


};

int main() {

  int n;
  cin >> n;

  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << "-----------" << "\n";
  int m;
  cin >> m;

  int b[m];
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }

  cout << "=====" << "\n";


    Solution ob;
    //cout << ob.calc_Sum(a,n,b,m) << endl;
    string str = ob.calc_diff(a,n,b,m);
  cout << "\n" << "==last=======" << "\n";
 for(int i = 0; i < str.length(); i++) {
     cout << str[i];
     cout << "\n";
 }

   return 0;
}

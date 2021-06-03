#include <iostream>
#include <vector>
using namespace std;

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {

        int i = 0;
        vector<int> myVector;

        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(arr[i] == arr[j]) {
                    myVector.push_back(arr[i]);
                    break;
                }
            }
        }
        return myVector;
    }
};

int main() {

  int n;
  cin >> n;

  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  Solution obj;
  vector<int> res = obj.duplicates(a, n);
  if(res.empty()) {
    cout << "-1";
  } else {
    for(int i : res) {
      cout << i << "\t";
    }
  }

  return 0;
}

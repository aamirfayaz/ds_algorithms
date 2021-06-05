#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    vector<int> duplicates(int arr[], int n) {

         vector<int> v;

        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(arr[i] == arr[j]) {
                    if(!count(v.begin(), v.end(), arr[i])){
                        v.push_back(arr[i]);
                    }
                    break;
                }
            }
        }
        if(v.empty()) {
            v.push_back(-1);
        }
        return v;
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

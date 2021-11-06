#include <iostream>
#include <vector>

using namespace std;


vector<int> find(int arr[], int n , int x )
{

    vector<int> res;
    int fi = -1, li = -1, mid;

    int low = 0, high = n - 1;

    while(low <= high) {
        mid = low + (high - low) / 2;
        if(arr[mid] == x) {
            fi = mid;
            high = mid - 1;
        } else if(x > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    res.push_back(fi);


    low = 0, high = n - 1, mid = 0;

    while(low <= high) {
        mid = low + (high - low) / 2;
        if(arr[mid] == x) {
            li = mid;
            low = mid + 1;
        } else if(x > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    res.push_back(li);


    return res;

}
int main() {

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

   int x;
   cin>>x;

    vector<int> res;
    res = find(a, n, x);

    cout << res[0] << "\t" << res[1];

    return 0;
}

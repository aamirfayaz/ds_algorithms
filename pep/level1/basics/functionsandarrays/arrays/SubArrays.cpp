 #include <iostream>
 using namespace std;

/*
A subarray/substring is a contiguous part of array.
In general, for an array/string of size n,
 there are n*(n+1)/2 non-empty subarrays/substrings.
*/
int main() {

    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //int n = sizeof(arr)/sizeof(arr[0]);

    cout << "-----------" << "\n";

    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            int k = i;
            while(k <= j) {
                cout << a[k] << "\t";
                k++;
            }
            cout << "\n";
        }
    }

    return 0;
}

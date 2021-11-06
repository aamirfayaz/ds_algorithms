#include <iostream>
using namespace std;

/*
  A subsequence of a string/array is a new string/array which is formed from the original
  string by deleting some (can be none) of the characters without disturbing the relative
  positions of the remaining characters. (ie, "ace" is a subsequence of "abcde" while "aec" is not).

  A subsequence is a sequence that can be derived from another sequence by zero or more elements,
  without changing the order of the remaining elements.

  Every subarray/substring is a subsequence.
  More specifically, Subsequence is a generalization of substring.

The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on
 every bit of two numbers. The result of AND is 1 only if both bits are 1.

  for n, n(subsequence) = 2 raise to power n - 1
*/

/*
 time-complexity: O(n * (2^n))
*/
int main() {

  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) {
    cin>>a[i];
  }

  for(int i=0;i<(1 << n);i++) {
    for(int j=0;j<n;j++) {
      if(i & (1<<j)) {
        cout << a[j] << " ";
      }
    }
    cout << endl;
  }


  return 0;
}

#include <iostream>
using namespace std;
/*
3 * 1 = 3
3 * 2 = 6
3 * 3 = 9
3 * 4 = 12
3 * 5 = 15
3 * 6 = 18
3 * 7 = 21
3 * 8 = 24
3 * 9 = 27
3 * 10 = 30
*/
int main() {

  int n;
  cout << "Enter n:";
  cin >> n;
  int c = 1;

  for(int i = 1; i <= 10; i++) {
    cout << n << " * " << i << " = " << n * i;
    cout << "\n";
  }
  return 0;
}

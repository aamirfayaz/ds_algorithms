#include <iostream>
using namespace std;

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

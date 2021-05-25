#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter n:";
  cin >> n;

  int sp = n / 2;
  int base1 = 1;
  int base2 = 0;

  for(int i = 1; i <= n; i++) {

    for(int j = 1; j <= sp; j ++) {
      cout << "\t";
    }

    int val = base1;
    for(int j = 1; j <= base1; j++) {
      cout << val << "\t";
      val = val + 1;
    }
    val = val - 2;
    for(int j = 1; j <= base2; j++) {
      cout << val << "\t";
      val = val - 1;
    }

    if(i <= n / 2) {
      sp = sp - 1;
      base1 = base1 + 1;
      base2 = base2 + 1;
    } else {
      sp = sp + 1;
      base1 = base1 - 1;
      base2 = base2 - 1;
    }

    cout << "\n";

  }
  return 0;
}

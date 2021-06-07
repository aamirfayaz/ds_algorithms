#include <iostream>
using namespace std;

int main() {

  int i = 10;

  if(i++ == i)
   cout << i << " is good" << endl;
  else
   cout << i << " is bad" << endl;

  int j = 20;

  if(++j == j)
  cout << j << " is good" << endl;
  else
  cout << j << " is bad" << endl;

  return 0;
}

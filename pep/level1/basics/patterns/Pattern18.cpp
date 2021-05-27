#include <iostream>
using namespace std;
/*
*	*	*	*	*	*	*
	*				*
		*		*
			*
		*	*	*
	*	*	*	*	*
*	*	*	*	*	*	*	
*/
int main() {

  int n;
  cin >> n;

  int sp  = 0;
  int c = n;

  for(int i = 1; i <= n; i++) {

    for(int j = 1; j <= sp; j++) {
      cout << "\t";
    }

    for(int j = 1; j <= c; j++) {
       if((i > 1 && (i <= n / 2)) && j > 1 && j < c)
        cout << "\t";
       else
        cout << "*" << "\t";
    }

    if(i <= n / 2) {
      sp += 1;
      c -= 2;
    } else {
      sp -= 1;
      c += 2;
    }

    cout << "\n";
  }
  return 0;
}

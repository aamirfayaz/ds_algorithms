#include <iostream>
using namespace std;
string reverseWord(string str){

    int start = 0, end = str.length() - 1;
    char temp;

  for(int i = 0; i < str.length(); i++) {
      if(start < end) {
          temp = str[start];
          cout << "temp : " << temp << endl;
          str[start] = str[end];
          str[end] = temp;
          start++;
          end--;
      } else {
        break;
      }
  }
  return str;
}

int main() {


	string s;
	cin >> s;

	cout << reverseWord(s) << endl;

	return 0;

}

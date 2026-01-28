#include <iostream>

using namespace std;

int main () {
  int n ;
  cin >> n;
  if(!(n & 1) and n >= 4) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}

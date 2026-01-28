#include <iostream>

using namespace std;

int main() {
  int n = 0;
  cin >> n;
  int res = 0;
  while(n--) {
    int p = 0, v = 0, t = 0;
    cin >> p >> v >> t;
    if(p + v + t >= 2) {
      res++;
    }
  }
  cout << res << endl;
  return 0;
}


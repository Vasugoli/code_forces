#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  int ones = 0;
  int twoes = 0;
  int threes = 0;

  for (const auto &ch : s) {
    if (ch != '+') {
      int num = ch - '0';

      if (num == 1) {
        ones++;
      } else if (num == 2) {
        twoes++;
      } else if (num == 3) {
        threes++;
      }
    }
  }

  while (ones--) {
    if (ones == 0 and (twoes == 0 and threes == 0)) {
      cout << 1;
    } else {
      cout << 1 << "+";
    }
  }

  while (twoes--) {
    if (twoes == 0 and threes == 0) {
      cout << 2 ;
    } else {
      cout << 2 << "+";
    }
  }

  while (threes--) {
    if (threes == 0) {
      cout << 3;
    } else {
      cout << 3 << "+";
    }
  }

  return 0;
}

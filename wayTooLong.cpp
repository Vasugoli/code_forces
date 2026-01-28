#include <iostream>
#include <string>

using namespace std;

void solve(string str) {
  if(str.size() <= 10) {
    cout << str << endl;
    return;
  }

  string ans = str[0] + to_string(str.size() - 2) +str[str.size() - 1];
  cout << ans << endl;
}

int main() {
  int n ;
  cin >> n;
  cin.ignore();

  while(n--) {
    string str;
    cin >> str;
    solve(str);
  }
  return 0;
}

#include <iostream>

using namespace std;
void solve() {
	int a, b, c;
	cin >> a >> b >> c;

	if (c == (a + b) or a == (c + b) or b == (a + c)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

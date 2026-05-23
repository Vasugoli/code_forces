#include <iostream>

using namespace std;

void solve(int a) {
	int count = 0;
	for (int i = 10; i >= 1; i--) {
		int ans = a / i;
		a %= i;
		count += ans;
	}
	cout << count << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << (abs(a - b) + 9) / 10 << endl;
		// if (a == b) {
		// 	cout << 0 << endl;
		// } else {
		// 	int num = abs(a - b);
		// 	solve(num);
		// }
	}
	return 0;
}

#include <iostream>
using namespace std;
using ll = long long;

static const auto fast_io = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	return nullptr;
}();

void solve();

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

void solve() {
	int n;
	cin >> n;
	ll can1 = 0, can2 = 0;
	for (size_t i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a == 1) {
			can1++;
		} else {
			can2++;
		}
	}
	int sum = can1 + 2 * can2;

	if (sum % 2)
		cout << "NO\n";
	else if (can1 == 0 and can2 % 2)
		cout << "NO\n";
	else
		cout << "YES\n";
}

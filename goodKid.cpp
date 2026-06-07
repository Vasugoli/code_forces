#include <iostream>
#include <vector>
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
	vector<int> a(n);

	for (auto it = a.begin(); it != a.end(); it++) {
		cin >> *it;
	}

	size_t minEl = 0;
	for (size_t i = 1; i < n; i++) {
		if (a[i] < a[minEl]) {
			minEl = i;
		}
	}
	a[minEl]++;
	ll res = 1;
	for (auto x : a) {
		res *= x;
	}

	cout << res << endl;
}

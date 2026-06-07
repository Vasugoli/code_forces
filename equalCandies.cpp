#include <iostream>
#include <limits>
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
	vector<ll> a(n);
	ll minEl = numeric_limits<ll>::max();

	for (auto it = a.begin(); it != a.end(); it++) {
		cin >> *it;
		minEl = min(*it, minEl);
	}

	ll res = 0;
	for (const auto &x : a) {
		res += x - minEl;
	}

	cout << res << endl;
}

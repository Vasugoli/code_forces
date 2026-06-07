#include <iostream>
#include <unordered_set>
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

	unordered_set<int> seen;

	for (const auto &x : a) {
		if (seen.find(x) != seen.end()) {
			cout << "NO" << endl;
			return;
		}
		seen.insert(x);
	}
	cout << "YES" << endl;
}

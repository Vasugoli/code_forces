#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve();

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

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
	vector<int> nums(n);

	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	sort(nums.begin(), nums.end());

	bool isPosi = true;

	for (int i = 1; i < n; i++) {
		isPosi &= (nums[i] - nums[i - 1] <= 1);
	}

	cout << (isPosi ? "YES" : "NO") << endl;
}

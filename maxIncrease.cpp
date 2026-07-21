#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<int> nums(n);

	for (auto &num : nums) {
		cin >> num;
	}

	int maxSeq = 1;
	int count = 1;
	for (int i = 1; i < n; i++) {
		if (nums[i] > nums[i - 1]) {
			count++;
		} else {
			count = 1;
		}
		maxSeq = max(maxSeq, count);
	}

	cout << maxSeq << "\n";
	return 0;
}

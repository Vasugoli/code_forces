#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

auto main() -> int {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> nums(4, 0);
	for (int &num : nums) {
		cin >> num;
	}

	sort(nums.begin(), nums.end());
	cout << nums[3] - nums[0] << " " << nums[3] - nums[1] << " "
		 << nums[3] - nums[2] << "\n";
	return 0;
}

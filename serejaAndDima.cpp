#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	int i = 0;
	int j = n - 1;
	int sereja = 0;
	int dima = 0;
	bool filp = true;
	while (i <= j) {
		int max_num = 0;
		if (nums[i] > nums[j]) {
			max_num = nums[i];
			i++;
		} else {
			max_num = nums[j];
			j--;
		}
		if (filp) {
			sereja += max_num;
			filp = !filp;
		} else {
			dima += max_num;
			filp = !filp;
		}
	}
	cout << sereja << " " << dima << endl;
	return 0;
}

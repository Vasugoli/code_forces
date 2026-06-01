#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> ones, twos, threes;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		if (a == 1) {
			ones.emplace_back(i + 1);
		} else if (a == 2) {
			twos.emplace_back(i + 1);
		} else {
			threes.emplace_back(i + 1);
		}
	}

	int minTeams = min(ones.size(), min(twos.size(), threes.size()));

	cout << minTeams << endl;

	int i = 0;
	while (i < minTeams) {
		cout << ones[i] << " " << twos[i] << " " << threes[i] << endl;
		i++;
	}
	return 0;
}

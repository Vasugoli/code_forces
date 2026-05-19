#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<bool> levels(n, false);

	int p, x;
	cin >> p;
	for (int i = 0; i < p; i++) {
		cin >> x;
		if (!levels[x - 1]) {
			levels[x - 1] = true;
		}
	}

	int q, y;
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> y;
		if (!levels[y - 1]) {
			levels[y - 1] = true;
		}
	}

	for (auto level : levels) {
		if (!level) {
			cout << "Oh, my keyboard!" << endl;
			return 0;
		}
	}
	cout << "I become the guy." << endl;
	return 0;
}

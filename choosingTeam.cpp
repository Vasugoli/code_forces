#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;
	int count = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;

		if (5 - a >= k) {
			count++;
		}
	}
	cout << (int)(count / 3) << endl;
	return 0;
}

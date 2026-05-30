#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		int count = 0;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			if (a % 2 != 0)
				count++;
		}

		cout << (count % 2 == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}

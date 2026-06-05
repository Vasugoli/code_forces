#include <iostream>
using namespace std;

#define IOS                                                                    \
	ios::sync_with_stdio(false);                                               \
	cin.tie(nullptr);                                                          \
	cout.tie(nullptr);

auto main() -> int {
	IOS;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		cout << (int)(n / 2) << endl;
	}
	return 0;
}

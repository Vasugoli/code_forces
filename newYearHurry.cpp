#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int count = 240 - k;
	int ans = n;

	for (int i = 1; i <= n; i++) {
		count -= 5 * i;
		if (count < 0) {
			ans = i - 1;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}

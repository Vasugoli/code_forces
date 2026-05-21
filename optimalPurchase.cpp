#include <algorithm>
#include <iostream>

using namespace std;
using LL = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		LL n, a, b;
		cin >> n >> a >> b;

		if (b >= (3 * a)) {
			cout << n * a << endl;
		} else {
			LL groupKeys = n / 3;
			LL remKeys = n % 3;
			LL cost = groupKeys * b + min(remKeys * a, b);
			cout << cost << endl;
		}
	}
	return 0;
}

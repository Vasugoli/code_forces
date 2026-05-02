#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		string s;
		cin >> s;

		int ans = 0;

		for (int i = 0; i < n;) {
			if (s[i] == 'B') {
				ans++;
				i += k;
			} else {
				i++;
			}
		}

		cout << ans << '\n';
	}

	return 0;
}

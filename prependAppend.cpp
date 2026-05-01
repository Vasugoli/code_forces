#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;

	int n;
	string st;
	while (t--) {
		cin >> n;
		cin >> st;

		int i = 0;
		int j = n - 1;

		int ans = n;
		while (st[i] != st[j] and ans > 0) {
			i++;
			j--;
			ans -= 2;
		}

		cout << ans << endl;
	}
	return 0;
}

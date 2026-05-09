#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int pow = 1;
		vector<int> res;
		while (n != 0) {
			if (n % 10 > 0) {
				res.emplace_back((n % 10) * pow);
			}
			n /= 10;
			pow *= 10;
		}
		cout << res.size() << endl;
		for (auto x : res) {
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}

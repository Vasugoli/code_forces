#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;

	while (t--) {
		int n;
		string st;
		cin >> n >> st;

		if (st.find("...") != string::npos) {
			cout << 2 << endl;
		} else {
			int count = 0;
			for (auto &x : st) {
				if (x == '.') {
					count++;
				}
			}
			cout << count << endl;
		}
	}
	return 0;
}

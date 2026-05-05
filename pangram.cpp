#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<bool> seen(26, false);
	int n;
	string st;
	cin >> n >> st;

	for (char c : st) {
		char low_ch = tolower(c);
		if (low_ch >= 'a' and low_ch <= 'z') {
			seen[low_ch - 'a'] = true;
		}
	}
	bool isPangram = true;
	for (auto x : seen) {
		if (!x) {
			isPangram = false;
			break;
		}
	}

	cout << (isPangram ? "YES" : "NO") << endl;
	return 0;
}

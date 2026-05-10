#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int num;
		cin >> num;

		if (num < 1400)
			cout << "Division 4\n";
		else if (num < 1600)
			cout << "Division 3\n";
		else if (num < 1900)
			cout << "Division 2\n";
		else
			cout << "Division 1\n";
	}
	return 0;
}

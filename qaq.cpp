#include <iostream>
#include <string>
#include <vector>

using namespace std;

auto main() -> int {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;
	int n = s.size();
	vector<vector<int>> dp(n + 1, vector<int>(4, 0));

	dp[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 4; j++)
			dp[i][j] = dp[i - 1][j];

		if (s[i - 1] == 'Q') {
			dp[i][1] += dp[i - 1][0];
			dp[i][3] += dp[i - 1][2];
		} else if (s[i - 1] == 'A') {
			dp[i][2] += dp[i - 1][1];
		}
	}
	cout << dp[n][3] << "\n";
	return 0;
}

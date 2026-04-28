#include <iostream>
#include <utility>

using namespace std;
using ll = long long;

pair<ll, ll> step(ll m, ll n) { return {n / m, n % m}; }

int main() {
	ll n;
	cin >> n;

	ll ans = 0;
	ll notes[] = {100, 20, 10, 5, 1};

	for (auto m : notes) {
		auto p = step(m, n);
		ans += p.first;
		n = p.second;
	}

	cout << ans << endl;

	return 0;
}

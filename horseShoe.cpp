#include <iostream>
#include <set>

using namespace std;
using ll = long long;

int main() {
	ll s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;

	set<ll> s = {s1, s2, s3, s4};
	cout << 4 - s.size() << endl;
	return 0;
}

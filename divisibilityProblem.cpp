#include <iostream>

using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll a , b;
        cin >> a >> b;
        if(a % b == 0 ) {
            cout << 0 << endl;
        }
        else {
            cout << b - a % b << endl;
        }
    }
    return 0;
}

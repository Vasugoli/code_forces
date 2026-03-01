#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int k;
    ll n;

    cin >> n >> k;

    while(k--) {
        int lastDig = n % 10;

        if(lastDig != 0) {
            n -= 1; 
        }
        else {
            n /= 10;
        }
    }
    cout << n << endl;
    return 0;
}

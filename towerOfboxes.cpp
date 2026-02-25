#include <iostream>

using namespace std;

using ll = long long int;

void stackBoxes(int n, int m, int d) {
    int ans = 0;

    while(n > 0) {
        int box_taken = 1;
        int load = 0;
        n--;

        while(n > 0 and load + m <= d) {
            load += m;
            box_taken += 1;
            n--;
        }

        ans++; 
    }
    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        int n , m , d;

        cin >> n >> m >> d;
        stackBoxes(n,m,d);
    }
    return 0;
}

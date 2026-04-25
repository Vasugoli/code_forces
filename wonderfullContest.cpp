#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n),steps(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            steps[i] = 100 / a[i];
        }

        int reachable_max = 0;
        bool ok = true;
        sort(steps.begin(), steps.end()); 
        for(int s : steps) {
            if(s > reachable_max + 1) {
                ok = false;
                break;
            }
            reachable_max += 100;
        }
        cout << (ok ? "Yes" : "No") << endl;
    }
    return 0;
}

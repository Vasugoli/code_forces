#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> dishs(n);
        int maxDish = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> dishs[i];
            maxDish = max(dishs[i], maxDish);
        }

        int countMax = 0;
        for(int i = 0; i < n; i++) {
            if(dishs[i] == maxDish)
                countMax++;
        }

        cout << countMax << endl;
    }
    return 0;
}


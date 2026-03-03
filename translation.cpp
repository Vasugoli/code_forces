#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
    string s;
    string t;

    cin >> s >> t;

    int r = t.size() - 1;
    int l = 0;

    while(l < r) {
        swap(t[l],t[r]);
        l++;
        r--;
    }

    if(s == t) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
    return 0;
}

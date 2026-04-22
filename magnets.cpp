#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> places(n);
    int i = 0;
    while(i < n) {
        cin >> places[i];
        i++;
    }

    int groups = 1;
    i = 1;
    while(i < n ) {
        if(places[i] != places[i - 1]) {
            groups++;
        }
        i++;
    }
    cout << groups << endl;
    return 0;
}

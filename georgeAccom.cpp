#include <iostream>

using namespace std;

int main() {
    int n ;
    cin >> n;
    int p , q;

    int result = 0;
    while(n--) {
        cin >> p >> q;
        if (q - p >= 2 ) {
            result++;
        }
    }

    cout << result << endl;
    return 0;
}

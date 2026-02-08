#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            int n = 0;
            cin >> n;
            if(1 == n) {
                cout << abs(3 - i) + abs(3 - j) << endl;
            }
        }
    }
    return 0;
}

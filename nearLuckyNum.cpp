#include <iostream>

using namespace std;
using ll = long long int;

int main() {
    ll num;
    cin >> num;
    
    int res = 0;
    while(num  > 0) {
        int lastDig = num % 10;
        if(lastDig == 4 or lastDig == 7) {
            res++;
        }
        num /= 10;
    }

    if(res == 4 or res == 7) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}

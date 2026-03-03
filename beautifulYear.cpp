#include <iostream>

using namespace std;

int main() {
    int year;
    cin >> year;

    while(true) {
        year++;
        int a = year / 1000;
        int b = ( year / 100 ) % 10;
        int c = ( year / 10 ) % 10;
        int d = year % 10;

        if (a != b and a != c and a != d and
            b != c and b != d and c != d) {
            cout << year << endl;
            break;
        }
    }
    return 0;
}

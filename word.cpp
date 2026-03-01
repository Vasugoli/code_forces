#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int upper = 0, lower = 0;
    for(const auto &ch : s) {
        if(isupper(ch)) {
            upper++;
        }
        else {
            lower++;
        }
    }
    if(upper > lower) {
        transform(
            s.begin(),
            s.end(),
            s.begin(),
            [](unsigned char c) {
                return toupper(c);
            }
        );
    }
    else {   
        transform(
            s.begin(),
            s.end(),
            s.begin(),
            [](unsigned char c) {
                return tolower(c);
            }
        );
    }
    cout << s << endl;
    return 0;
}

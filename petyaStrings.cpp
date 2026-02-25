#include <cctype>
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::getline;
using std::string;
using std::tolower;

string convert(string &st) {
    string ans = "";
    for(const auto &ch : st) {
        ans += tolower(ch);
    }
    return ans;
}

int main() {
    string s;
    string t;

    getline(cin,s);
    getline(cin,t);
    
    if(convert(s) < convert(t)) {
        cout << "-1";
    }
    else if(convert(s) > convert(t) ) {
        cout << "1";
    }
    else {
        cout << "0";
    }
    return 0;
}

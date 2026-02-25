#include <iostream>
#include <string>
#include <set>

using std::cout;
using std::cin;
using std::string;
using std::set;
using std::endl;

int main() {
    string st;

    cin >> st;

    set<char> st_set(st.begin(),st.end());
    if(!(st_set.size() & 1)) {
        cout << "CHAT WITH HER!" << endl;
    } 
    else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}

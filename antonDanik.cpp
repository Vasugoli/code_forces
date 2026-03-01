#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string scores;
    cin >> scores;

    int antonScore = 0;
    int danik = 0;
    for(const auto &score : scores) {
        if(score == 'A') {
            antonScore++;
        }
        else {
            danik++;
        }
    }
    
    string res;
    if(antonScore > danik) {
        res = "Anton";
    }
    else if (antonScore < danik) {
        res = "Danik";
    }
    else {
        res = "Friendship";
    }
    cout << res << endl;
    return 0;
}

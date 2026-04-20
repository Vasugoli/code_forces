#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> response(n);

    for(int i = 0; i < n; i++) {
        cin >> response[i];
    }

    int hard = 0, easy = 0;

    for(const auto &res : response) {
        if(res == 1) {
            cout << "HARD";
            return 0;
        }
    }
   cout << "EASY"; 
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    vector<int> heights(n);
    for(int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    
    int widthsMin = 0;
    for(const auto &height : heights ) {
        if(height > h) {
            widthsMin += 2;
        }
        else {
            widthsMin += 1;
        }
    }
    cout << widthsMin << endl;
    return 0;
}

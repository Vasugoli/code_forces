#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    int moves[] = {5, 4, 3, 2, 1};

    int min_moves = 0;
    
    for(const auto &move : moves) {
        min_moves += x / move;
        x %= move;
    }
    cout << min_moves << endl;
    return 0;
}

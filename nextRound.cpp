#include <iostream>

using namespace std;

int main() {
    int n = 0, k = 0;

    cin >> n >> k;

    int res = 0;
    int nums[n];

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int kthscore = nums[k - 1];

    for(int i = 0; i < n; i++) {
        if(nums[i] >= kthscore and nums[i] > 0 )
            res++;
    }
    cout << res << endl;
    return 0;
}

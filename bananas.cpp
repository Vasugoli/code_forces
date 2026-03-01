#include <iostream>
#include <print>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    long long total = 0;
    for(int i = 1; i <= w; i++) {
        total += k * i;
    }
    
    if(total <= n) {
        println("{}",0);
    }
    else {
        println("{}",total - n);
    }
    return 0;
}

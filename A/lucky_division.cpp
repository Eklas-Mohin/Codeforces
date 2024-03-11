/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

bool isLucky (int x) {
    while (x > 0) {
        if (!(x % 10 == 7 or x % 10 == 4)) {
            return false;
        }
        x /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{};
    cin >> n;
    for (int i = 4; i <= n; ++i) {
        if (n % i == 0) {
            if (isLucky(i)) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0; 
}
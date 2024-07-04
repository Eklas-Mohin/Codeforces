/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{};
    cin >> t;
    while (t--) {
        cin >> n;
        int temp = n, cnt{};
        while (true) {
            if (n % 7 == 0) {
                cout << n << endl;
                break;
            }
            n = (n / 10);
            n *= 10;
            n += cnt;
            cnt += 1;
        }
    }
    return 0;
}
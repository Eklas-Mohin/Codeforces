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
        long long x{}, sum{}, sq{};
        for (int i = 0; i < n; ++i) {
            cin >> x;
            sum += x;
        }
        x = (sqrt(sum));
        if ((x * x) == sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

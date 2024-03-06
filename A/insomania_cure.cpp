/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k{}, l{}, m{}, n{}, d{};
    cin >> k >> l >> m >> n >> d;
    int ans{};
    for (int i = 1; i <= d; ++i) {
        if (i % k == 0 or i % l == 0 or i % m == 0 or i % n == 0) {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}
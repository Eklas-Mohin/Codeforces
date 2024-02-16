/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{};
    long long n{}, ans{};
    cin >> t;
    while (t--) {
        cin >> n;
        ans = 0;
        while (n > 0) {
            ans += n;
            n /= 2;
        }
        cout << ans << endl;
    }
    return 0;
}

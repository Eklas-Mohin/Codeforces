/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{}, in{}, ans{};
    cin >> t;
    while (t--) {
        cin >> n;
        ans = 0;
        for (int i = 0; i < n; ++i) {
            cin >> in;
            ans += abs(in);
        }
        cout << ans << endl;
    }
    return 0;
}
/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

string solve(int n) {
    string ans{};
    int x{26}, cnt{2};
    while (cnt > 0) {
        if (n - cnt >= x) {
            ans = char(96 + x) + ans;
            cnt = cnt - 1;
            n = n - x;
        } else {
            x = x - 1;
        }
    }
    ans = char(96 + n) + ans;
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{};
    string ans{};
    cin >> t;
    while (t--) {
        cin >> n;
        ans = solve(n);
        cout << ans << endl;
    }
    return 0;
}
/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{}, curr{};
    cin >> t;
    while (t--) {
        cin >> n;
        curr = min(9, n);
        string ans{};
        while (n > 0) {
            ans = to_string(curr) + ans;
            n = n -  curr;
            curr = curr - 1;
            curr = min(curr, n);
        }
        cout << ans << endl;
    }
    return 0;
}

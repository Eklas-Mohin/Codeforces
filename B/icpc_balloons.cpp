/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{}, x{}, ans{};
    string str{};
    cin >> t;
    while (t--) {
        cin >> n >> str;
        bool check[26];
        memset(check, false, sizeof(check));
        ans = n;
        for (int i = 0; i < n; ++i) {
            x = str[i] - 65;
            if (!check[x]) {
                ans += 1;
            }
            check[x] = true;
        }
        cout << ans << endl;
    }
    return 0;
}

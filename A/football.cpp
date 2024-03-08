/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, mx{};
    map<string, int> mp;
    string str{}, ans{};
    cin >> n;
    for (int i = 0;i < n; ++i) {
        cin >> str;
        mp[str] += 1;
        if (mp[str] > mx) {
            ans = str;
            mx = mp[str];
        }
    }
    cout << ans << endl;
    return 0;
}
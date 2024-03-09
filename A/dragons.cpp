/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int s{}, n{}, x{}, y{};
    vector<pair<int, int>> vp;
    cin >> s >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        vp.push_back(make_pair(x, y));
    }
    sort(vp.begin(), vp.end());
    for (int i = 0; i < n; ++i) {
        if (vp[i].first < s) {
            s += vp[i].second;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
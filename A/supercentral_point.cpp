/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, a{}, b{}, ans{};
    map<pair<int, int>, bool> mp;
    vector<pair<int, int>> vp;
    pair<int, int> p;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        p.first = a;
        p.second = b;
        vp.push_back(p);
        mp[p] = true;
    }
    for (int i = 0; i < n; ++i) {
        int x = vp[i].first;
        int y = vp[i].second;
        int count{};
        for (int i = x + 1; i <= 1000; ++i) {
            p.first = i;
            p.second = y;
            if (mp[p]) {
                count += 1;
                break;
            }
        }
        for (int i = x - 1; i >= -1000; --i) {
            p.first = i;
            p.second = y;
            if (mp[p]) {
                count += 1;
                break;
            }
        }
        for (int i = y + 1; i <= 1000; ++i) {
            p.first = x;
            p.second = i;
            if (mp[p]) {
                count += 1;
                break;
            }
        }
        for (int i = y - 1; i >= -1000; --i) {
            p.first = x;
            p.second = i;
            if (mp[p]) {
                count += 1;
                break;
            }
        }
        if (count == 4) {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}

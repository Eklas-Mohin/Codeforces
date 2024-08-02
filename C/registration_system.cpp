/**
*    author: mohin
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{};
    string str{};
    map<string, int>mp;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> str;
        if (mp[str] != 0) {
            cout << str << mp[str] << endl;
        } else {
            cout << "OK" << endl;
        }
        mp[str] += 1;
    }
    return 0;
}

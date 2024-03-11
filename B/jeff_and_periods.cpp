/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, k{}, cnt{}, arr[100001] = {};
    set<int> s;
    vector<int> v[100001];
    vector<pair<int, int>> ans;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        s.insert(arr[i]);
        v[arr[i]].push_back(i + 1);
    }
    for (int x : s) {
        set<int> m;
        for (int i = 1; i < v[x].size(); ++i) {
            k = v[x][i] - v[x][i - 1];
            m.insert(k);
        }
        if (m.size() == 0) {
            k = 0;
        }
        if (m.size() == 1 or m.size() == 0) {
            cnt += 1;
            ans.push_back(make_pair(x, k));
        }
    }
    cout << cnt << endl;
    for (pair p : ans) {
        cout << p.first << ' ' << p.second << endl;
    }
    return 0; 
}
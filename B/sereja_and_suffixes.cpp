/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n{}, m{}, in{};
    cin >> n >> m;
    
    vector<int> a(n);
    vector<int> ans(n, 0);
    set<int> present;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = n - 1; i >= 0; --i) {
        present.insert(a[i]);
        ans[i] = present.size();
    }

    int q{};
    for (int i = 0; i < m; ++i) {
        cin >> q;
        cout << ans[q - 1] << endl;
    }

    return 0; 
}

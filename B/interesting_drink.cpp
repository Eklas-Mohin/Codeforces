/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n{}, x[100000], q{}, m{}, ans{};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    sort (x, x + n);

    cin >> q;
    while (q--) {
        cin >> m;
        auto it = upper_bound(x, x + n, m) - x;
        cout << it << endl;
    }
    
    return 0;
}
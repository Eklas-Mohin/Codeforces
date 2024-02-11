/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, x{}, ans[101] = {};
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        ans[x] = i;
    }
    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << ' ';
    }
    cout << endl;
    return 0;
}
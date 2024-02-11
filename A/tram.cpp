/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, a{}, b{}, ans{}, count{};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        count -= a;
        count += b;
        ans = max(ans, count);
    }
    cout << ans << endl;
    return 0;
}
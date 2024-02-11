/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, a{}, b{}, c{}, ans{};
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        if ((a + b + c) > 1) {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}

/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, a{}, sum{}, ans{5};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        sum += a;
    }
    for (int i = sum + 1; i <= sum + 5; ++i) {
        if ((i - 1) % (n + 1) == 0) {
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}
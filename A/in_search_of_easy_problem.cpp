/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, x{};
    string ans{"EASY"};
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        if (x) {
            ans = "HARD";
        }
    }
    cout << ans << endl;
    return 0;
}
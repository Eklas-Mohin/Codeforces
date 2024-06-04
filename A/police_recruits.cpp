/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, x{}, curr{}, ans{};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x == -1) {
            if (curr < 1) {
                ans += 1;
            } else {
                curr -= 1;
            }
        } else {
            curr += x;
        }
    }
    cout << ans << endl;
    return 0;
}

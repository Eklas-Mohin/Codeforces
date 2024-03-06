/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, in{}, five{}, zero{};
    string ans{};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> in;
        if (in == 5) {
            five += 1;
        } else {
            zero += 1;
        }
    }
    five /= 9;
    for (int i = 0; i < five * 9; ++i) {
        ans = ans + '5';
    }
    if (zero == 0) {
        cout << -1 << endl;
        return 0;
    }
    if (zero > 0 and five > 0) {
        while (zero--) {
            ans = ans + '0';
        }
    } else {
        ans = '0';
    }
    cout << ans << endl;
    return 0;
}

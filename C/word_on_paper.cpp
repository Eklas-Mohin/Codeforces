/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{};
    string str{};
    cin >> t;
    while (t--) {
        string ans{};
        for (int i = 0; i < 8; ++i) {
            cin >> str;
            for (int j = 0; j < 8; ++j) {
                if (str[j] != '.') {
                    ans = ans + str[j];
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

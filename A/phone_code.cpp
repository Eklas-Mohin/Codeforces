/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, ans{};
    string str[30000];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> str[i];
    }
    for (int i = 0; i < str[0].length(); ++i) {
        for (int j = 1; j < n; ++j) {
            if (str[0][i] != str[j][i]) {
                i = str[0].length();
                break;
            }
        }
        ans += 1;
    }
    cout << ans - 1 << endl;
    return 0;
}
/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, ans{};
    string str{};
    cin >> n >> str;
    for (int i = 1; i < n; ++i) {
        if (str[i] == str[i - 1]) {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}

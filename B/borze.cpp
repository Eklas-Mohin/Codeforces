/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str{}, ans{};
    cin >> str;
    for (int i = 0; i < str.length(); ++i) {
        if ( str[i] == '.') {
            ans = ans + '0';
        } else if (str[i] == '-' and i < (str.length() - 1) and str[i + 1] == '-') {
            ans = ans + '2';
            ++i;
        } else {
            ans = ans + '1';
            ++i;
        }
    }
    cout << ans << endl;
    return 0;
}

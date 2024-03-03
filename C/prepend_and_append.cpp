/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, ans{};
    string str{};
    cin >> t;
    while (t--) {
        cin >> ans >> str;
        int i{0}, j{ans - 1};
        while (i < j and str[i] != str[j]) {
            ans = ans - 2;
            i += 1;
            j -= 1; 
        }
        cout << ans << endl;
    }
    return 0;
}
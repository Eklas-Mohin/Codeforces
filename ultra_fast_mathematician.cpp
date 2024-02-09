/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str1{}, str2{}, ans{};
    cin >> str1 >> str2;
    for (int i = 0; i < str1.length(); ++i) {
        if (str1[i] != str2[i]) {
            ans = ans + '1';
        } else {
            ans = ans + '0';
        }
    }
    cout << ans << endl;
    return 0;
}
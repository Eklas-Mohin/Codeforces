/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{};
    string str1{}, str2{};
    cin >> t;
    while (t--) {
        bool flag{true};
        cin >> n >> str1 >> str2;
        for (int i = 0; i < n; ++i) {
            if (str1[i] != str2[i]) {
                if (str1[i] == 'R' or str2[i] == 'R') {
                    flag = false;
                    i = n;
                }
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str{};
    int len{};
    bool flag{true};
    cin >> str;
    len = str.length() - 1;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '1') {
            if ((i + 1) <= len and str[i + 1] == '4') {
                i += 1;
                if ((i + 1) <= len and str[i + 1] == '4') {
                    i += 1;
                }
            }
        } else {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
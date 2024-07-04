/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{};
    while (t--) {
        string str{};
        cin >> str;
        bool flag{false};
        for (int i = 1; i < str.length(); ++i) {
            if (str[i] != str[i - 1]) {
                swap(str[i], str[i - 1]);
                flag = true;
            }
        }
        if (flag) {
            cout << "YES" << endl << str << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str{}, st{"hello"};
    int curr{};
    cin >> str;
    for (int i = 0; i < st.length(); ++i) {
        bool flag{false};
        for (int j = curr; j < str.length(); ++j) {
            if (str[j] == st[i]) {
                flag = true;
                curr = j + 1;
                break;
            }
        }
        if (!flag) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
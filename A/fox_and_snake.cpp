/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, m{};
    cin >> n >> m;
    string str1{}, str2{}, str3{};
    bool flag{true};
    for (int i = 1; i <= m; ++i) {
        str1 += '#';
    }
    for (int i = 1; i < m; ++i) {
        str2 += '.';
    }
    str2 += '#';
    str3 = str2;
    reverse(str3.begin(), str3.end());
    for (int i = 1; i < n; i += 2) {
        if(flag) {
            cout << str1 << endl;
            cout << str2 << endl;
            flag = !flag;
        } else {
            cout << str1 << endl;
            cout << str3 << endl;
            flag = !flag;
        }
    }
    if (n % 2) {
        cout << str1 << endl;
    }
    return 0;
}

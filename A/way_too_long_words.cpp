/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, len{};
    string str{}, abbr{};
    cin >> n;
    while (n--) {
        cin >> str;
        if (str.length() <= 10) {
            cout << str << endl;
        } else {
            len = str.length();
            abbr = str[0] + to_string(len - 2) + str[len - 1];
            cout << abbr << endl;
        }
    }
    return 0;
}

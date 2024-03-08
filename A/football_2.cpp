/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str{};
    int cnt{1};
    cin >> str;
    for (int i = 1; i < str.length(); ++i) {
        if (str[i] == str[i - 1]) {
            cnt += 1;
        } else {
            cnt = 1;
        }
        if (cnt == 7) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0; 
}
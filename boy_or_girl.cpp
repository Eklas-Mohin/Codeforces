/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str{};
    int x{}, count{};
    bool check[26];
    memset(check, false, sizeof(check));
    cin >> str;
    for (int i = 0; i < str.length(); ++i) {
        x = str[i] - 97;
        check[x] = true;
    }
    for (int i = 0; i < 26; ++i) {
        if (check[i]) {
            count += 1;
        }
    }
    if (count % 2) {
        cout << "IGNORE HIM!" << endl;
        
    } else {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}

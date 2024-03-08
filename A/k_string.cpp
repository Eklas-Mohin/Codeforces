/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k{}, x{}, arr[26] = {};
    string str{};
    cin >> k >> str;
    for (int i = 0; i < str.length(); ++i) {
        x = int(str[i]);
        x = x - 97;
        arr[x] += 1;
    }
    for(int i = 0; i < 26; ++i) {
        if (arr[i] % k != 0) {
            cout << -1 << endl;
            return 0;
        }
    }
    string kstring{};
    for (int i = 0; i < 26; ++i) {
        x = arr[i] / k;
        while (x--) {
            kstring = kstring + char(i + 97);
        }
    }
    x = str.length() / kstring.length();
    while (x--) {
        cout << kstring;
    }
    cout << endl;
    return 0; 
}
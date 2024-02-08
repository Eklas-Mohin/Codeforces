/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str1{}, str2{};
    cin >> str1 >> str2;
    for (int i = 0; i < str1.length(); ++i) {
        if (str1[i] >= 97) {
            str1[i] = str1[i] - 32;
        }
        if (str2[i] >= 97) {
            str2[i] = str2[i] - 32;
        }
    }
    if (str1 == str2) {
        cout << 0 << endl;
    } else if (str1 > str2) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}

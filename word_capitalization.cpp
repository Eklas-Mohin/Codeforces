/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str{};
    cin >> str;
    if (str[0] >= 97) {
        str[0] = str[0] - 32;
    }
    cout << str << endl;
    return 0;
}

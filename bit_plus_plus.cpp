/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, x{};
    string str{};
    cin >> n;
    while (n--) {
        cin >> str;
        if (str[0] == '+' or str[2] == '+') {
            x += 1;
        } else if (str[0] == '-' or str[2] == '-') {
            x -= 1;
        }
    }
    cout << x << endl;
    return 0;
}

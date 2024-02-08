/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

bool isLucky(int cnt) {
    if (!cnt) {
        return false;
    }
    while (cnt) {
        int m = cnt % 10;
        if (!(m == 4 or m == 7)) {
            return false;
        }
        cnt /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str{};
    int cnt{};
    cin >> str;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '4' or str[i] == '7') {
            cnt += 1;
        }
    }
    bool lucky = isLucky(cnt);
    if (lucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

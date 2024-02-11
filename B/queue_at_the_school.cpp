/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, t{};
    string str{};
    cin >> n >> t >> str;
    while (t--) {
        for (int i = 1; i < n; ++i) {
            if (str[i] == 'G' and str[i - 1] == 'B') {
                swap(str[i], str[i - 1]);
                ++i;
            }
        }
    }    
    cout << str << endl;
    return 0;
}

/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{};
    string str{}, timur{"Timur"};
    sort(timur.begin(), timur.end());
    cin >> t;
    while (t--) {
        cin >> n >> str;
        sort(str.begin(), str.end());
        if (str == timur) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

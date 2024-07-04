/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{};
    cin >> t;
    while (t--) {
        int n{};
        string str{};
        cin >> n >> str;
        sort(str.begin(), str.end());
        cout << (int)str[n - 1] << endl; 
    }
    return 0;
}
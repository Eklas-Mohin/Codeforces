/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{};
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v;
        int mod{10};
        while (n > 0) {
            if (n % mod) {
                v.push_back(n % mod);
            }
            n = n - (n % mod);
            mod *= 10;
        }
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}


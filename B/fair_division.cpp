/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{}, x{}, k{};
    cin >> t;
    while (t--) {
        cin >> n;
        int one{}, two{};
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (x == 2) {
                two += 1;
            } else {
                one += 1;
            }
        }
        k = ((two % 2) * 2) + one;
        if (k == 2 and one == 0) {
            cout << "NO" << endl;
        } else if (k % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

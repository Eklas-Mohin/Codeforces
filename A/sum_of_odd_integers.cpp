/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t{};
    long long n{}, k{};
    cin >> t;

    while (t--) {
        cin >> n >> k;
        if ((n % 2 == k % 2) and (k * k <= n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0; 
}

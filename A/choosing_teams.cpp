/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, k{}, x{}, cnt{};
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        x = 5 - x;
        if (x >= k) {
            cnt += 1;
        }
    }
    cout << cnt / 3 << endl;
    return 0; 
}
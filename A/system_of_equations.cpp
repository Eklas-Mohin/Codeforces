/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, m{}, k{}, a{}, b{}, cnt{};
    cin >> n >> m;
    k = min(n, m);
    for (int i = 0; i <= k; ++i) {
        for (int j = 0; j <= k; ++j) {
            a = i * i + j;
            b = i + j * j;
            if (a == n and b == m) {
                cnt += 1;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
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
        long long n{}, ans{}, temp{};
        cin >> n;
        for (int i = 1; i < 10; ++i) {
            temp = i;
            while (temp <= n) {
                ans += 1;
                temp = temp * 10 + i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

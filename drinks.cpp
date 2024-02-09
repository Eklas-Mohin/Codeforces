/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, x{};
    double sum{};
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        sum += x;
    }
    cout << setprecision(12) << sum / n << endl;
    return 0;
}
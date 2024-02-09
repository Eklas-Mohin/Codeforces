/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, a{}, b{}, x{};
    cin >> t;
    while (t--) {
        cin >> a >> b;
        x = a + b - 1;
        x = x / b;
        x = x * b;
        cout << x - a << endl;
    }
    return 0;
}
/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{};
    cin >> n;
    for (int i = 1; i < n; ++i) {
        if (i % 2) {
            cout << "I hate that ";
        } else {
            cout << "I love that ";
        }
    }
    if (n % 2) {
        cout << "I hate it" << endl;
    } else {
        cout << "I love it" << endl;
    }
    return 0;
}

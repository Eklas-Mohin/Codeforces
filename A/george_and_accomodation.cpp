/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, p{}, q{}, count{};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> p >> q;
        if ((q - p) >= 2) {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}
/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{}, arr[50];
    cin >> t;
    while (t--) {
        cin >> n;
        int sum{};
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum % 2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
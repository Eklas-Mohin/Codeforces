/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{}, arr[10] = {};
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        arr[0] += 1;
        int ans = 1;
        for (int i = 0; i < n; ++i) {
            ans = ans * arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}
/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{},  m{}, ans{INT_MAX}, arr[50] = {};
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int k = m - n;
    for (int i = 0; i <= k; ++i) {
        int x = arr[i + n - 1] - arr[i];
        if (x < ans) {
            ans = x;
        }
    }
    cout << ans << endl;
    return 0;
}
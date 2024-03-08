/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, m{}, ans{}, arr[100] = {};
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    m = min(n, m);
    for (int i = 0; i < m; ++i) {
        if (arr[i] < 0) {
            ans += arr[i];
        } else {
            break;
        }
    }
    cout << -ans << endl;
    return 0;
}
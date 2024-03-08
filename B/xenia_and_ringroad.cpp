/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, m{}, curr{1}, arr[100000] = {};
    long long ans {0};
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < m; ++i) {
        if (arr[i] >= curr) {
            ans = ans + arr[i] - curr;
            curr = arr[i];
        } else {
            ans = ans + n - curr + arr[i];
            curr = arr[i];
        }
    }
    cout << ans << endl;
    return 0;
}
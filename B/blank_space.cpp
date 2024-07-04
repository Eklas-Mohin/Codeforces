/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{}, arr[100];
    cin >> t;
    while (t--) {
        cin >> n;
        int ans{}, cnt{1};
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (arr[i] == 0) {
                cnt = 1;
                ans = 1;
            }
        }
        for (int i = 1; i < n; ++i) {
            if (arr[i] == 0 and arr[i - 1] == 0) {
                cnt += 1;
                ans = max(cnt, ans);
            } else {
                cnt = 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
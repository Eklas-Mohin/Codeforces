/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{}, arr1[50], arr2[50];
    cin >> t;
    while (t--) {
        cin >> n;
        long long ans{};
        int m = INT_MAX, k = INT_MAX;
        for (int i = 0; i < n; ++i) {
            cin >> arr1[i];
            if (arr1[i] < m) {
                m = arr1[i];
            }
        }
        for (int i = 0; i < n; ++i) {
            cin >> arr2[i];
            if (arr2[i] < k) {
                k = arr2[i];
            }
        }
        for (int i = 0; i < n; ++i){
            int a = arr1[i] - m;
            int b = arr2[i] - k;
            ans = 1LL * ans + min(a, b) + abs(a - b);
        }
        cout << ans << endl;
    }
    return 0;
}

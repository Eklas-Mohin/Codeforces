/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{};
    cin >> t;
    while (t--) {
        cin >> n;
        int ans{}, q{}, arr1[50], arr2[50];
        for (int i = 0; i < n; ++i) {
            cin >> arr1[i] >> arr2[i];
            if (q < arr2[i] and arr1[i] <= 10) {
                q = arr2[i];
                ans = i + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
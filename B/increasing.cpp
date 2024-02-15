/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{}, arr[100] = {};
    string ans{};
    cin >> t;
    while (t--) {
        cin >> n;
        ans = "YES";
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 1; i < n; ++i) {
            if (arr[i] == arr[i - 1]) {
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

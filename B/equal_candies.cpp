/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{}, arr[50] = {};
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int sum{};
        for (int i = 1; i < n; ++i) {
            sum = sum + arr[i] - arr[0];
        }
        cout << sum << endl;
    }
    return 0;
}

/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int solve(int *arr, int n) {
    int cnt{};
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != i % 2) {
            cnt += 1;
        }
    }
    return ((cnt + 1) / 2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{}, arr[40] = {};
    cin >> t;
    while (t--) {
        cin >> n;
        int odd{}, even{}, x{}, y{};
        even = (n + 1) / 2;
        odd = n / 2;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (arr[i] % 2) {
                y += 1;
            } else {
                x += 1;
            }
        }
        if (x == even and y == odd) {
            cout << solve(arr, n) << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
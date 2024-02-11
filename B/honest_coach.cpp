/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int minimumDifference(int *arr, int n) {
    sort(arr, arr + n);
    int mn{INT_MAX};
    for (int i = 1; i < n; ++i) {
        mn = min(mn, arr[i] - arr[i - 1]);
    }
    return mn;
}

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
        int min_diff = minimumDifference(arr, n);
        cout << min_diff << endl;
    }
    return 0;
}

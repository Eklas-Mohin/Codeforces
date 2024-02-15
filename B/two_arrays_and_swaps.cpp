/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int maximumSum(int *arr1, int *arr2, int n, int k) {
    int max_sum{};
    for (int i = 0; i < n; ++i) {
        if (i < k) {
            max_sum = max_sum + max(arr1[i], arr2[i]);
        } else {
            max_sum = max_sum + arr1[i];
        }
    }
    return max_sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{}, k{}, arr1[30] = {}, arr2[30] = {};
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i < n; ++i) {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> arr2[i];
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n, greater<int>());
        int max_sum = maximumSum(arr1, arr2, n, k);
        cout << max_sum << endl;
    }
    return 0;
}

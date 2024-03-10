/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, m{}, curr{}, arr1[1000] = {}, arr2[1000] = {};
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }
    sort(arr1, arr1 + m);
    int mn{},  mx{};
    for (int i = 0; i < n; ++i) {
        mn = mn + arr1[curr];
        arr1[curr] -= 1;
        if (arr1[curr] == 0) {
            curr += 1;
        }
    }
    sort(arr2, arr2 + m, greater<int>());
    for (int i = 0; i < n; ++i) {
        int k = *max_element(arr2, arr2 + m);
        int p = max_element(arr2, arr2 + m) - arr2;
        mx =  mx + k;
        arr2[p] = arr2[p] - 1;
    }
    cout << mx << ' ' << mn << endl;
    return 0;
}
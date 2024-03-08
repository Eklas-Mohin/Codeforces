/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k{}, ans{}, arr[12] = {};
    cin >> k;
    for (int i = 0; i < 12; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + 12, greater<int>());
    for (int i = 0; i < 12; ++i) {
        if (k < 1) {
            break;
        } else {
            k = k - arr[i];
            ans += 1;
        }
    }
    if (k > 0) {
        ans = -1;
    }
    cout << ans << endl;
    return 0; 
}
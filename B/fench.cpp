/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n{}, k{}, arr[150000];
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long curr{}, mn{INT_MAX}, cnt{}, ans{};
    for (int i = 0; i < n; ++i) {
        curr = curr + arr[i];
        cnt += 1;
        if (cnt == k) {
            if (curr < mn) {
                ans = i - (k - 1) + 1;
                mn = curr;
            }
            curr = curr - arr[i - k + 1];
            cnt -= 1;
        }
    }

    cout << ans << endl;

    return 0;
}
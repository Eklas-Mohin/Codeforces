/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, ans{}, arr[7] = {};
    cin >> n;
    for (int i = 0; i < 7; ++i) {
        cin >> arr[i];
    }
    while (n > 0) {
        for (int i = 0; i < 7; ++i) {
            n = n - arr[i];
            if (n <= 0) {
                ans = i + 1;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
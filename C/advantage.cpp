/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{}, arr[200000] = {}, crr[200000] = {};
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            crr[i] = arr[i];
        }
        sort(crr, crr + n, greater<int>());
        for (int i = 0; i < n; ++i) {
            if (arr[i] != crr[0]) {
                cout << arr[i] - crr[0] << ' ';
            } else {
                cout << arr[i] - crr[1] << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}

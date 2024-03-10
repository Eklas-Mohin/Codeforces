/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, diff{}, arr[200000] = {};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    diff = arr[n - 1] - arr[0];
    long long x{1}, y{1};
    for (int i = 1; i < n; ++i) {
        if (arr[i] == arr[i - 1]) {
            x += 1;
        } else {
            break;
        }
    }
    for (int i = (n - 1); i > 0; --i) {
        if (arr[i] == arr[i - 1]) {
            y += 1;
        } else {
            break;
        }
    }
    if (diff == 0) {
        cout << diff << ' ' << (x * (y - 1)) / 2 << endl;
        return 0;
    }
    cout << diff << ' ' << x * y << endl;
    return 0; 
}
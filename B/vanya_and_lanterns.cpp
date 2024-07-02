/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, l{}, arr[1000];
    cin >> n >> l;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    double a, b, c;
    a = arr[0];
    b = 0;
    c = l - arr[n - 1];
    for (int i = 1; i < n; ++i) {
        double x = arr[i] - arr[i - 1];
        b = max(b, x / 2);
    }
    double ans = max(a, max(b, c));
    cout << setprecision(10) << ans << endl;
    return 0;
}


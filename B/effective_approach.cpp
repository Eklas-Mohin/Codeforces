/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, m{}, b{}, arr[100000] = {};
    map<int,int> left;
    map<int, int> right;
    long long l{0}, r{0};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (left[arr[i]] == 0) {
            left[arr[i]] = i + 1;
        }
        right[arr[i]] = i + 1;
    }
    cin >> m;
    while (m--) {
        cin >> b;
        l = l + left[b];
        r = r + n - right[b] + 1;
    }
    cout << l << ' ' << r << endl;
    return 0;
}

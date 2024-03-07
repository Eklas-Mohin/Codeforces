/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, arr[100] = {};
    pair<int, int> p;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    int diff{INT_MAX};
    for (int i = 0; i < n - 1; ++i) {
        int k = abs(arr[i] - arr[i + 1]);
        if (k < diff) {
            p.first = i + 1;
            p.second = i + 2;
            diff = k;
        }
    }
    int k = abs(arr[0] - arr[n - 1]);
    if (k < diff) {
        p.first = 1;
        p.second = n;
    }
    cout << p.first << ' ' << p.second << endl;
    return 0;
}
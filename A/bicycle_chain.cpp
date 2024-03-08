/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, m{}, mx{}, ans{-1}, arr1[50] = {}, arr2[50] = {};
    int ratio[10001] = {};
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> arr1[i];
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr2[j] % arr1[i] == 0) {
                ratio[arr2[j] / arr1[i]] += 1;
            }
        }
    }
    for (int i = 1; i <= 10000; ++i) {
        if (ratio[i] > 0) {
            ans = ratio[i];
        }
    }
    cout << ans << endl;
    return 0;
}
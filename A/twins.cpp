/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, sum{}, cnt{}, curr{}, arr[100] = {};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum =  sum + arr[i];
    }
    sort (arr, arr + n, greater<int>());
    while (sum >= curr) {
        curr += arr[cnt];
        sum = sum - arr[cnt++];
    }
    cout << cnt << endl;
    return 0; 
}
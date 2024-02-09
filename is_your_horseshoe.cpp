/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int arr[4] = {}, ans{};
    for (int i = 0; i < 4; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+4);
    for (int i = 1; i < 4; ++i) {
        if (arr[i] == arr[i - 1]) {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}
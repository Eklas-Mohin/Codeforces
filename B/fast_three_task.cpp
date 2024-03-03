/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{}, in{}, ans{}, sum{};
    int arr[100005] = {};
    cin >> t;
    while (t--) {
        cin >> n;
        sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum % 3 == 0) {
            ans = 0;
        } else if (sum % 3 == 2) {
            ans = 1;
        } else {
            ans = 2;
            for (int i = 0; i < n; ++i) {
                if ((sum - arr[i]) % 3 == 0) {
                    ans = 1;
                    break;
                } 
            }
        }
        cout << ans << endl;
    }
    return 0;
}
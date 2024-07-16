/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n{}, k{}, arr[101] = {};
        string str{};
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
        }
        for (int i = 1; i <= n; ++i) {
            cin >> k >> str;
            int cnt1{}, cnt2{};
            for (int j = 0; j < k; ++j) {
                if (str[j] == 'D') {
                    cnt1 += 1;
                } else {
                    cnt2 += 1;
                }
            }
            if (cnt1 > cnt2) {
                cnt1 = cnt1 - cnt2;
                arr[i] = arr[i] + cnt1;
                arr[i] %= 10;
            } else {
                cnt2 = cnt2 - cnt1;
                arr[i] = (arr[i] - cnt2);
                if (arr[i] < 0) {
                    arr[i] += 10;
                }
                arr[i] %= 10;
            }
        }
        for (int j = 1; j <= n; ++j) {
            cout << arr[j] << ' ';
        }
        cout << endl;
    }

    return 0; 
}

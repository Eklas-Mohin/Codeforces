/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, n{}, arr[50] = {};
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        bool flag{true};
        for (int i = 1; i < n; ++i) {
            if (arr[i] % 2 != arr[i - 1] % 2) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
            continue;
        }
        for (int i = 1; i < n; ++i) {
            if (arr[i] % 2 == arr[i - 1] % 2) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0; 
}
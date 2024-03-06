/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, arr[100000] = {}, temp[100000] = {};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        temp[i] = arr[i];
    }
    sort(temp, temp + n);
    if (n == 1) {
        cout << n << endl;
    } else {
        if (temp[0] == temp[1]) {
            cout << "Still Rozdil" << endl;
        } else {
            for (int i = 0; i < n; ++i) {
                if (arr[i] == temp[0]) {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

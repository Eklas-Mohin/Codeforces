/**
*    author: mohin
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n{}, cnt{}, arr[100] = {};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        arr[i] =  arr[i] % 2;
        cnt += arr[i];

    }
    if (cnt == 1) {
        for (int i = 0; i < n; ++i) {
            if(arr[i] % 2) {
                cout << i + 1 << endl;
                break;
            }
        }
    } else {
        for (int i = 0; i < n; ++i) {
            if(!(arr[i] % 2)) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}

/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, x{}, y{}, in{}, arr[101] = {};
    cin >> n >> x;
    for (int i = 0; i < x; ++i) {
        cin >> in;
        arr[in] = 1;
    }
    cin >> y;
    for (int i = 0; i < y; ++i) {
        cin >> in;
        arr[in] = 1;
    }
    for (int i = 1; i <= n; ++i) {
        if (arr[i] != 1) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}


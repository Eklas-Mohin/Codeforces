/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, a{}, b{};
    int left_zero{}, left_one{}, right_zero{}, right_one{};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if (a == 0) {
            left_zero += 1;
        } else {
            left_one += 1;
        }
        if (b == 0) {
            right_zero += 1;
        } else {
            right_one += 1;
        }
    }
    cout << min(left_zero, left_one) + min (right_zero, right_one) << endl;
    return 0;
}
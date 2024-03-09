/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, x{}, k{}, m{};
    cin >> n;
    x = 2 * n + 1;
    for (int i = 0; i < x; ++i) {
        k = i - n;
        if (k > 0) {
            k = -k;
        }
        for (int j = 0; j < x; ++j) {
            if (j >= n) {
                if (k > 0) {
                    cout << k << ' ';
                } else if (k == 0) {
                    cout << k;
                }
                k -= 1;
            } else {
                if (k < 0) {
                    cout << "  ";
                } else {
                    cout << k << ' ';
                }
                k += 1;
            }
        }
        cout << endl;
    }
    return 0;
}
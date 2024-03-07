/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n{}, k{}, ans{}, even{}, odd{};
    cin >> n >> k;
    odd = (n + 1) / 2;
    even = n - odd;
    if (k <= odd) {
        cout << k * 2 - 1 << endl;
    } else {
        k = k - odd;
        cout << k * 2 << endl;
    }
    return 0;
}
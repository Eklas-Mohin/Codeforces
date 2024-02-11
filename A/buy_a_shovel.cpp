/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int minimumShovel(int k, int r) {
    int total{k}, cnt{1};
    while (total % 10 != 0 and total % 10 != r) {
        cnt += 1;
        total += k;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k{}, r{}, mn{};
    cin >> k >> r;
    mn = minimumShovel(k, r);
    cout << mn << endl;
    return 0;
}
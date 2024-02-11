/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k{}, n{}, w{}, total{}, borrowed{};
    cin >> k >> n >> w;
    total = (w * (w + 1)) / 2;
    total *= k;
    borrowed = max(0, total - n);
    cout << borrowed << endl;
    return 0;
}

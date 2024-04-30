/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n{}, ans{};
    vector<long long> v;
    cin >> n;
    ans = n;
    for (long long x = 2; x <= sqrt(n + 1); ++x) {
        while (n % x == 0) {
            v.push_back(x);
            n /= x;
        }
    }
    if (n != 1) {
        v.push_back(n);
    }
    if (v.size() == 1) {
        cout << ans << endl;
    } else {
        for (int i = 1; i < v.size(); ++i) {
            int g = __gcd(v[i], v[i - 1]);
            if (g < ans) {
                ans = g;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

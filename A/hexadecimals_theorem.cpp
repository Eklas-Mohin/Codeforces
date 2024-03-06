/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n{}, k{}, sum{};
    vector<long long> fib;
    vector<long long> ans;
    fib.push_back(0);
    fib.push_back(1);
    k = 2;
    cin >> n;
    while (sum < n) {
        sum = fib[k - 1] + fib[k - 2];
        k += 1;
        fib.push_back(sum);
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = fib.size() - 1; j >= 0; --j) {
            if (fib[j] <= n) {
                ans.push_back(fib[j]);
                n = n - fib[j];
                break;
            }
        }
    }
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << ' ';
    }
    cout << endl;
    return 0;
}
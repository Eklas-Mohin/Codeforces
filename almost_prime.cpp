/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

const int mx = 3001;
vector<bool> sieve(mx, true);

void primeSieve() {
    sieve[0] = sieve[1] = false;
    for (int i = 4; i <= mx; i += 2) {
        sieve[i] = false;
    }
    for (int i = 3; i * i <= mx; i += 2) {
        if (sieve[i]) {
            for (int j = i * i; j <= mx; j += i) {
                sieve[j] = false;
            }
        }
    } 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, ans{};
    cin >> n;
    primeSieve();
    for (int i = 1; i <= n; ++i) {
        int cnt{};
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                int a{j}, b{i / j};
                if (sieve[a]) {
                    cnt += 1;
                }
                if (a != b and sieve[b]) {
                    cnt += 1;
                }
            }
        }
        if (cnt == 2) {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}

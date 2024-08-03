/**
*    author: mohin
**/

#include <bits/stdc++.h>

using namespace std;

#define MX 1E6
bool prime[1000000];

void primeSieve() {
    memset(prime, true, sizeof(prime));
    prime[1] = false;
    prime[2] = true;
    for (int i = 4; i <= MX; i += 2) {
        prime[i] = false;
    }
    for (int i = 3; i * i <= MX; i += 2) {
        if (prime[i]) {
            for (int j = i * i; j <= MX; j += i) {
                prime[j] = false;
            }
        }
    }
}

bool isPrime(long long n) {
    return prime[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    primeSieve();
    long long n{}, in{};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> in;
        long long x = sqrt(in);
        if (x * x == in) {
            if (isPrime(x)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

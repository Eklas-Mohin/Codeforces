/**
 *    author: mohin
**/

#include <bits/stdc++.h>

using namespace std;

const int MX = 1000000;
vector<bool> prime(MX + 1, true);

void primeSieve() {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= MX; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= MX; j += i) {
                prime[j] = false;
            }
        }
    }
}

bool isPrime(int n) {
    return prime[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    primeSieve();
    
    int n;
    cin >> n;
    
    while (n--) {
        long long in;
        cin >> in;
        long long x = sqrt(in);
        
        if (x * x == in && isPrime(x)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}

/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;
 
bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n + 1); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, m{};
    cin >> n >> m;
    while (!isPrime(++n)) {
        isPrime(n);
    }
    if (m == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

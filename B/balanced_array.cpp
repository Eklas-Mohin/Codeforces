/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

void printAnswer(long long n) {
    long long sum{};
    for (int i = 1; i <= (n / 2); ++i) {
        cout << i * 2 << ' ';
        sum += i * 2;
    }
    for (int i = 1; i < (n / 2); ++i) {
        cout << (i * 2 - 1) << ' ';
        sum -= i * 2 - 1;
    }
    cout << sum << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{};
    long long n{}, s{};
    cin >> t;
    while (t--) {
        cin >> n;
        s = (n * (n + 1)) / 2;
        if (s % 2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            printAnswer(n);
        }
    }
    return 0;
}
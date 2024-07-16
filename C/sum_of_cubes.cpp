/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

#define MX 10E12

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<long long> mem;
    map<long long, bool> p;
    long long k{};
    for (long long i = 1; i * i * i <= MX; ++i) {
        k = i * i * i;
        mem.push_back(k);
        p[k] = true;
    }

    int t{};
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        bool flag{false};
        for (int i = 0; i < mem.size(); ++i) {
            k = n - mem[i];
            if (p[k]) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0; 
}


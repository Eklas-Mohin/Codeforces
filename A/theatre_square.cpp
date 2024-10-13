/*****************************
 *   author:  mohin          *
 *   problem: Codeforces 1A  *
 *   verdict: Accepted       *
 *****************************/

#include <bits/stdc++.h>

using namespace std;

long long numOfFlagstones(long long n, long long m, long long a) {
    long long r = (n + a - 1) / a;
    long long c = (m + a - 1) / a;
    return r * c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    long long n, m, a;
    cin >> n >> m >> a;
 
    cout << numOfFlagstones(n, m, a) << endl;
    
    return 0;
}

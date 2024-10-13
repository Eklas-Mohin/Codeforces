/*****************************
 *   author:  mohin          *
 *   problem: Codeforces 1A  *
 *   verdict: Accepted       *
 *****************************/

#include <bits/stdc++.h>

using namespace std;

long long numOfFlagstones(int n, int m, int a) {
    int r = (n + a - 1) / a;
    int c = (m + a - 1) / a;
    return 1LL * r * c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n, m, a;
    cin >> n >> m >> a;
 
    cout << numOfFlagstones(n, m, a) << endl;
    
    return 0;
}

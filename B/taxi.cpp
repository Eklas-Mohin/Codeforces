/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n{}, p{}, one{}, two{}, three{}, min_taxi{};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> p;
        if (p == 1) {
            one += 1;
        } else if (p == 2) {
            two += 1;
        } else if (p == 3) {
            three += 1;
        } else {
            min_taxi += 1;
        }
    }

    int k = min(one, three);
    min_taxi += k;
    one -= k; three -= k;
    min_taxi += three;

    min_taxi = min_taxi + (two / 2);
    two = two % 2;
    if (two == 1) {
        min_taxi += 1;
        one = one - 2;
    }

    min_taxi = min_taxi + (one / 4);
    one = one % 4;

    if (one > 0) {
        min_taxi += 1;
    }

    cout << min_taxi << endl;

    return 0;
}
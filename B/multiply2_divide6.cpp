/** ******************************
 *   author:  mohin              *
 *   problem: Codeforces 1374B   *
 *   verdict: Accepted           *
 *********************************/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(0);
    int t, n, two, three;
    cin >> t;

    while (t--) {
        cin >> n;
        two = three = 0;

        while (n % 2 == 0) {
            two++;
            n /= 2;
        }

        while (n % 3 == 0) {
            three++;
            n /= 3;
        }

        if (n != 1 or two > three) {
            cout << -1 << endl;
        } else {
            cout << 2 * three - two << endl;
        }
    }

    return 0; 
}

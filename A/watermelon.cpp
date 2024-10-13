/** **************************
 *   author:  mohin          *
 *   problem: Codeforces 4A  *
 *   verdict: Accepted       *
 *****************************/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int w;
    cin >> w;

    if (w > 2 and w % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

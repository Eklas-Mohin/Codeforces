/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t{}, a{};
    cin >> t;
    while (t--) {
        cin >> a;
        a = 180 - a;
        if (360 % a == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0; 
}

/*
    The formula to find the sum of
    the interior angles of a polygon with n sides is:

    SUM = (n - 2) * 180

    Dividing the formula by n, one can find the value of
    each angle by:

    Angle = ((n - 2) * 180) / n
    180 * n - Angle * n = 360
    n = (360) / (180 - Angle)

    if n is an integer -> YES
    else -> NO
*/
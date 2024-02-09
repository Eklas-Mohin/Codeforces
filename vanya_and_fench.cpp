/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, h{}, x{}, width{};
    cin >> n >> h;
    width = n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x > h) {
            width += 1;
        }
    }
    cout << width << endl;
    return 0;
}
/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a{}, b{}, c{}, ans{};
    cin >> a >> b >> c;
    ans = a + b + c;
    ans = max(ans, a * b * c);
    ans = max(ans, (a + b) * c);
    ans = max(ans, a * (b + c));
    cout << ans << endl;
    return 0; 
}
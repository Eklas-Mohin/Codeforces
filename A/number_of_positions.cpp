/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{},  a{}, b{}, x{};
    cin >> n >> a >> b;
    x = a + b + 1;
    x = n - x;
    x = max(0, x);
    cout << n - a - x << endl;
    return 0; 
}
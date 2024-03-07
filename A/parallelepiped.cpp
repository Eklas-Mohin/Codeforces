/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ab{}, bc{}, ca{};
    int a{}, b{}, c{};
    cin >> ab >> bc >> ca;
    a = (ab * ca) / bc;
    b = (ab * bc) / ca;
    c = (bc * ca) / ab;
    a = sqrt(a);
    b = sqrt(b);
    c = sqrt(c);
    cout << (a + b + c) * 4 << endl;
    return 0;
}
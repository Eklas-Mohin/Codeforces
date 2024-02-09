/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, temp{};
    cin >> n;
    while (true) {
        ++n;
        set<int> s;
        temp = n;
        while (temp > 0) {
            s.insert(temp % 10);
            temp /= 10;
        }
        if (s.size() == 4) {
            break;
        }
    }
    cout << n << endl;
    return 0;
}
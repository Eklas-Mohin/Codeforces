/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string sum{}, temp{}, new_sum{};
    cin >> sum;
    for (int i = 0; i < sum.length(); ++i) {
        if (sum[i] != '+') {
            temp = temp + sum[i];
        }
    }
    sort(temp.begin(), temp.end());
    new_sum = temp[0];
    for (int i = 1; i < temp.length(); ++i) {
        new_sum = new_sum + '+' + temp[i];
    }
    cout << new_sum << endl;
    return 0;
}
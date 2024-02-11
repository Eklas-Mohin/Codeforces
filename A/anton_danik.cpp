/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, anton{}, danik{};
    string str{};
    cin >> n >> str;
    for (int i = 0; i < n; ++i) {
        if (str[i] == 'A') {
            anton += 1;
        } else {
            danik += 1;
        }
    }
    if (anton > danik) {
        cout << "Anton" << endl;
    } else if (danik > anton) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
    return 0;
}
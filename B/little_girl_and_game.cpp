/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str{};
    int cnt{}, arr[26];
    memset(arr, 0, sizeof(arr));
    cin >> str;
    for (int i = 0; i < str.length(); ++i) {
        int x = str[i] - 97;
        arr[x] += 1;
    }
    for (int i = 0; i < 26; ++i) {
        if (arr[i] % 2) {
            cnt += 1;
        }
    }
    if (cnt % 2 or cnt == 0) {
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
    }
    return 0; 
}

/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str{}, ans{};
    cin >> str;
    map<char, bool> vowel = {
        {'a', true},
        {'e', true},
        {'i', true},
        {'o', true},
        {'u', true},
        {'y', true},
    };
    transform(str.begin(), str.end(), str.begin(), ::tolower); 
    for (int i = 0; i < str.length(); ++i) {
        if (!vowel[str[i]]) {
            ans = ans + '.' + str[i];
        }
    }
    cout << ans << endl;
    return 0;
}
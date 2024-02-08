/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str{};
    int lower{}, upper{};
    cin >> str;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= 97) {
            lower += 1;
        } else {
            upper += 1;
        }
    }
    if (upper > lower) {
        transform(str.begin(), str.end(), str.begin(), ::toupper); 
    } else {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    cout << str << endl;
    return 0;
}

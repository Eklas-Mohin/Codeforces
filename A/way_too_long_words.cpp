/*****************************
 *   author:  mohin          *
 *   problem: Codeforces 71A *
 *   verdict: Accepted       *
 *****************************/

#include <bits/stdc++.h>

using namespace std;

string solve(const string& str) {
    int len = str.length();
    if (len > 10) {
        return string(1, str[0]) + to_string(len - 2) + str[len - 1];
    }
    return str;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n;
    string str;

    cin >> n;
    while (n--) {
        cin >> str;
        cout << solve(str) << endl;
    }
    
    return 0;
}

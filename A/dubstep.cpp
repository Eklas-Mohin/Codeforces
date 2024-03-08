/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str{}, temp{};
    vector<string> ans;
    cin >> str;
    str = str + "WUB";
    for (int i = 0; i < str.length(); ++i) {
        if(str[i] == 'W' and str[i + 1] == 'U' and str[i + 2] == 'B') {
            if (temp != "") {
                ans.push_back(temp);
                temp = "";
            }
            i += 2;
        } else {
            temp = temp + str[i];
        }
    }
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] <<' ';
    }
    cout << endl;
    return 0; 
}
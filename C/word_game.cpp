/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t{}, n{};
    cin >> t;

    while (t--) {
        cin >> n;
        string str;
        
        int a{}, b{}, c{};
        map<string, bool>mp1;
        map<string, bool>mp2;
        map<string, bool>mp3;
        vector<string> str1;
        vector<string> str2;
        vector<string> str3;

        for (int i = 0; i < n; ++i) {
            cin >> str;
            str1.push_back(str);
            mp1[str] = true;
        }

        for (int i = 0; i < n; ++i) {
            cin >> str;
            str2.push_back(str);
            mp2[str] = true;
        }

        for (int i = 0; i < n; ++i) {
            cin >> str;
            str3.push_back(str);
            mp3[str] = true;
            if (mp1[str] == false and mp2[str] == false) {
                c += 3;
            } else if (mp1[str] == false or mp2[str] == false) {
                c += 1;
            }
        }

        for (int i = 0; i < n; ++i) {
            str = str1[i];
            if (mp2[str] == false and mp3[str] == false) {
                a += 3;
            } else if (mp2[str] == false or mp3[str] == false) {
                a += 1;
            }
        }

        for (int i = 0; i < n; ++i) {
            str = str2[i];
            if (mp1[str] == false and mp3[str] == false) {
                b += 3;
            } else if (mp1[str] == false or mp3[str] == false) {
                b += 1;
            }
        }

        cout << a << ' ' << b << ' ' << c << endl;
    }

    return 0; 
}

/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int table[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t{};
    char ch;
    cin >> t;
    string str{};
    while (t--) {
        int ans{};
        for (int i = 1; i <= 10; ++i) {
            for (int j = 1; j <= 10; ++j) {
                cin >> ch;
                if (ch == 'X') {
                    ans += table[i - 1][j - 1];
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}

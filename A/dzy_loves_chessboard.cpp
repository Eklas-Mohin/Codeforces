/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, m{};
    char ch{}, arr[100][100];
    memset(arr, '-', sizeof(arr));
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i % 2 == j % 2) {
                arr[i][j] = 'B';
            } else {
                arr[i][j] = 'W';
            }
            cin >> ch;
            if (ch == '-') {
                arr[i][j] = ch;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0; 
}

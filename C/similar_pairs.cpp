/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t{}, n{}, arr[50];
    cin >> t;
    while (t--) {
        cin >> n;
        int e{}, o{};
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if (arr[i] % 2 == 0) {
                e++;
            } else {
                o++;
            }
        }

        if (e % 2 == 0 and o % 2 == 0) {
            cout << "YES" << endl;
        } else {
            bool flag{false};
            sort(arr, arr + n);
            for (int i = 1; i < n; ++i) {
                if ((arr[i] - 1) == arr[i - 1]) {
                    flag = true;
                    break;
                }
            }
            if (flag) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
        
    }

    return 0; 
}

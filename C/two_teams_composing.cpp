/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t{}, n{}, cnt1{}, cnt2{}, m{}, arr[200000];
    cin >> t;
    while (t--) {
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            s.insert(arr[i]);
        }
        sort(arr, arr + n);
        
        cnt1 = s.size();
        cnt2 = m = 1;
        for (int i = 1; i < n; ++i) {
            if (arr[i] == arr[i - 1]) {
                m++;
                if (m > cnt2) {
                    cnt2 = m;
                }
            } else {
                m = 1;
            }
        }

        if (cnt1 == cnt2) {
            cout << cnt1 - 1 << endl;
        } else if (cnt1 > cnt2) {
            cout << cnt2 << endl;
        } else {
            cout << cnt1 << endl;
        }
    }

    return 0; 
}

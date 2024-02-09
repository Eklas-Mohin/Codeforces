/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n{}, count{1};
    int arr[100005] = {};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 1; i < n; ++i) {
        if (arr[i] != arr[i - 1]) {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}
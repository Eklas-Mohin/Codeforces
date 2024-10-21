#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, k, ans = 0;
    int arr[51];

    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < k; ++i) {
        if (arr[i] > 0) {
            ans += 1;
        } else {
            break;
        }
    }

    for (int i = k; i < n; ++i) {
        if (arr[i] == arr[i - 1] and arr[i] > 0) {
            ans += 1;
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}

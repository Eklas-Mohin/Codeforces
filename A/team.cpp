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

    int n, a, b, c, ans = 0;
    cin >> n;
    
    while (n--) {
        cin >> a >> b >> c;
        if ((a + b + c) > 1) {
            ans += 1;
        }
    }

    cout << ans << endl;

    return 0;
}

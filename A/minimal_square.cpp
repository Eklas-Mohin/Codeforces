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

    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int a, b;
        cin >> a >> b;

        int square_side = min(max(2 * a, b), max(2 * b, a));
        cout << square_side * square_side << endl;
    }
    
    return 0;
}

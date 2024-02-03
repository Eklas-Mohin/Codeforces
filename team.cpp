#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n{}, a{}, b{}, c{}, ans{};
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        if ((a + b + c) >= 2) {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}

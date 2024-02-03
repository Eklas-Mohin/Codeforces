#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int w{};
    cin >> w;
    if (w >= 4 and w % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

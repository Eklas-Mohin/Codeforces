#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int n{}, x{};
    string str{};
    cin >> n;
    while(n--) {
        cin >> str;
        if (str[0] == '+' or str[2] == '+') {
            x += 1;
        } else if (str[0] == '-' or str[2] == '-') {
            x -= 1;
        }
    }
    cout << x << endl;
    return 0;
}

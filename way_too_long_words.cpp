#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int n{}, len{};
    string str{}, abbr{};
    cin >> n;
    while (n--) {
        cin >> str;
        if (str.length() <= 10) {
            cout << str << endl;
        } else {
            len = str.length();
            abbr = str[0] + to_string(len - 2) + str[len - 1];
            cout << abbr << endl;
        }
    }
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

string solve(const string& str) {
    int len = str.length();

    if (len > 10) {
        return str[0] + to_string(len - 2) + str[len - 1];
    }
    
    return str;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    string str;

    cin >> n;

    while (n--) {
        cin >> str;
        cout << solve(str) << endl;
    }
    
    return 0;
}
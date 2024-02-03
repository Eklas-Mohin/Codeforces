#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n{}, arr[1000] = {};
    int count{}, mx{}, mn{};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    mx = arr[0]; mn = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > mx) {
            count += 1;
            mx = arr[i];
        } else if (arr[i] < mx) {
            count += 1;
            mn = arr[i];
        }
    }
    cout << count << endl;
    return 0;
}

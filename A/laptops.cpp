/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

struct PriceQuality {
    int price;
    int quality;
};

bool comparePrice(const PriceQuality &a, const PriceQuality &b) {
    return a.price < b.price;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n{};
    bool flag{false};
    cin >> n;
    struct PriceQuality arr[100000];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].price >> arr[i].quality;
    }
    sort (arr, arr + n, comparePrice);

    for (int i = 1; i < n; ++i) {
        if (arr[i].quality < arr[i - 1].quality) {
            flag = true;
            break;
        }
    }

    if (flag) {
        cout << "Happy Alex" << endl;
    } else {
        cout << "Poor Alex" << endl;
    }
    
    return 0;
}
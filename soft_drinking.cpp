#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n{}, k{}, l{}, c{}, d{}, p{}, nl{}, np{}, toasts{};
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    l = l * k;
    c = c * d;
    toasts = l / nl; 
    toasts = min(toasts, c);
    toasts = min(toasts, p / np);
    toasts /= n;
    cout << toasts <<endl;
    return 0;
}

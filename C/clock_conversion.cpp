/**
 *    author: mohin    
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int h, m;
        char colon;
        cin >> h >> colon >> m;
        if (h == 0) {
            printf("12:%02d AM\n", m);
        } else if (h < 12) {
            printf("%02d:%02d AM\n", h, m);
        } else if (h == 12) {
            printf("%02d:%02d PM\n", h, m);
        } else {
            printf("%02d:%02d PM\n", h - 12, m);
        }
    }
    return 0; 
}

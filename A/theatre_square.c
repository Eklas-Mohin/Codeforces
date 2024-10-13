/*****************************
*   author:  mohin           *
*   problem: Codeforces 1A   *
*   verdict: Accepted        *
******************************/

#include <stdio.h>
#include <math.h>

long long numOfFlagstones(int n, int m, int a) {
    int r = (n + a - 1) / a;
    int c = (m + a - 1) / a;
    
    return 1LL * r * c;
}

int main() {
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);

    printf("%lld\n", numOfFlagstones(n, m, a));
    
    return 0;
}


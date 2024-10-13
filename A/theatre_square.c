/*****************************
*   author:  mohin           *
*   problem: Codeforces 1A   *
*   verdict: Accepted        *
******************************/

#include <stdio.h>
#include <math.h>

long long numOfFlagstones(long long n, long long m, long long a) {
    long long r = (n + a - 1) / a;
    long long c = (m + a - 1) / a;

    return r * c;
}

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    printf("%lld\n", numOfFlagstones(n, m, a));

    return 0;
}

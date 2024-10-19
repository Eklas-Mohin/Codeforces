#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>
#include <time.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <errno.h>
#include <assert.h>
#include <signal.h>
#include <setjmp.h>
#include <stdarg.h>
#include <locale.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <pthread.h>

#define MAX_SIZE 1000005
#define INF INT_MAX
#define MOD 1000000007
#define PI acos(-1)
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

#ifdef DEBUG
#define debug(fmt, ...) fprintf(stderr, fmt, ##__VA_ARGS__)
#else
#define debug(fmt, ...)
#endif

int minBacteria(int n) {
    int res = 0;

    while (n > 0) {
        res += n % 2;
        n = n / 2;
    }

    return res;
}

int main() {

    int n;

    scanf("%d", &n);

    printf("%d\n", minBacteria(n));

    return 0;
}

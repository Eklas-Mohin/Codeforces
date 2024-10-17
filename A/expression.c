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

int maxValue(int a, int b, int c) {
    int max_val = MAX(a * b * c, a + b + c);
    max_val = MAX(max_val, a + (b * c));
    max_val = MAX(max_val, a * (b + c));
    max_val = MAX(max_val, (a + b) * c);
    return max_val;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max_val = maxValue(a, b, c);
    printf("%d\n", max_val);
    return 0;
}
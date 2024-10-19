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

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    char str[101];
    int cnt = 0;

    scanf("%s", str);

    int length = strlen(str);
    for (int i = 0; i < length; ++i) {
        if (isupper(str[i])) {
            cnt += 1;
        }
    }

    if (cnt == length) {
        for (int i = 0; i < length; ++i) {
            str[i] = tolower(str[i]);
        }
    } else if ((cnt + 1) == length && islower(str[0])) {
        for (int i = 0; i < length; ++i) {
            str[i] = tolower(str[i]);
        }
        str[0] = toupper(str[0]);
    }

    printf("%s\n", str);

    return 0;
}
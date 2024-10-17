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

#ifdef DEBUG
#define debug(fmt, ...) fprintf(stderr, fmt, ##__VA_ARGS__)
#else
#define debug(fmt, ...)
#endif

void solve(char *str, char *res) {
    int len = strlen(str);
    if (len > 10) {
        sprintf(res, "%c%d%c", str[0], len - 2, str[len - 1]);
    } else {
        strcpy(res, str);
    }
}

int main() {
    int n;
    char str[101], abbr[101];
    scanf("%d", &n);
    
    while (n--) {
        scanf("%s", str);
        solve(str, abbr);
        printf("%s\n", abbr);
    }

    return 0;
}

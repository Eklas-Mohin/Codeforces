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

int main() {
    char str[101];
    int lower = 0, upper = 0;

    scanf("%s", str);

    for (int i = 0; i < strlen(str); ++i) {
        if (islower(str[i])) {
            lower++;
        } else {
            upper++;
        }
    }

    if (upper > lower) {
        for (int i = 0; i < strlen(str); ++i) {
            str[i] = toupper(str[i]);
        }
    } else {
        for (int i = 0; i < strlen(str); ++i) {
            str[i] = tolower(str[i]);
        }
    }

    printf("%s\n", str);

    return 0;
}

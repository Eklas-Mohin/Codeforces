/** **************************
 *   author:  mohin          *
 *   problem: Codeforces 71A *
 *   verdict: Accepted       *
 *****************************/

#include <stdio.h>
#include <string.h>

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

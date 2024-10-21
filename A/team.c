#include <stdio.h>

int main() {
    int n, a, b, c, ans = 0;
    scanf("%d", &n);

    while (n--) {
        scanf("%d %d %d", &a, &b, &c);
        if ((a + b + c) > 1) {
            ans += 1;
        }
    }

    printf("%d\n", ans);

    return 0;
}

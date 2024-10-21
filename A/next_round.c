#include <stdio.h>

int main() {
    int n, k, ans = 0;
    int arr[51];

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < k; ++i) {
        if (arr[i] > 0) {
            ans += 1;
        } else {
            break;
        }
    }

    for (int i = k; i < n; ++i) {
        if (arr[i] == arr[i - 1] && arr[i] > 0) {
            ans += 1;
        } else {
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}

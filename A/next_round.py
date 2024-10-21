n, k = map(int, input().split())
arr = list(map(int, input().split()))

ans = 0

for i in range(k):
    if arr[i] > 0:
        ans += 1
    else:
        break

for i in range(k, n):
    if arr[i] == arr[i - 1] and arr[i] > 0:
        ans += 1
    else:
        break

print(ans)

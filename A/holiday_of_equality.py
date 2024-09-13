def main():
    n = int(input())
    w = list(map(int, input().split()))
    w.sort()
    sum = 0
    for i in range(n):
        sum = sum + w[i]
    ans = w[n - 1] * n - sum
    print(ans)

if __name__ == '__main__':
    main()
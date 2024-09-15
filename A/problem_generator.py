def main():
    t = int(input())
    r = 'ABCDEFG'
    while t:
        w = list(map(int, input().split()))
        s = input()
        ans = 0
        for c in r:
            k = s.count(c)
            ans = ans + max(0, w[1] - k)
        print(ans)
        t = t - 1
            
if __name__ == '__main__':
    main()
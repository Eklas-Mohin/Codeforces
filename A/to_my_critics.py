def main():
    t = int(input())
    while t:
        w = list(map(int, input().split()))
        a = w[0] + w[1]
        b = w[0] + w[2]
        c = w[1] + w[2]
        k = max(a, max(b, c))
        if k >= 10:
            print('YES')
        else:
            print('NO')
        t = t - 1
            
if __name__ == '__main__':
    main()
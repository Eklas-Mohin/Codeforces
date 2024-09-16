def main():
    t = int(input())
    while t:
        w = list(map(int, input().split()))
        tt = w[0] + w [1] + w[2] + w[3]
        m = max(w[0], max(w[1], w[2]))
        if tt % 3 == 0 and (tt // 3) >= m:
            print('YES')
        else:
            print('NO')
        t = t - 1
            
if __name__ == '__main__':
    main()
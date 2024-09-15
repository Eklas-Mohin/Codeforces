def main():
    t = int(input())
    while t:
        w = list(map(int, input().split()))
        fmax = max(w[0], w[1])
        fmin = min(w[0], w[1])
        smax = max(w[2], w[3])
        smin = min(w[2], w[3])
        if fmax >= smin and smax >= fmin:
            print('YES')
        else:
            print('NO')
        t = t - 1
            
if __name__ == '__main__':
    main()
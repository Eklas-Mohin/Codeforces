def main():
    t = int(input())
    while t:
        w = list(map(int, input().split()))
        k = (w[2] // w[0]) * w[0]
        k += w[1]
        if k > w[2]:
            k = k - w[0]
        print(k)
        t = t - 1
            
if __name__ == '__main__':
    main()
def main():
    t = int(input())
    while t:
        n = int(input())
        w = list(map(int, input().split()))
        x = 0
        for i in range(n):
            if w.count(w[i]) == 1:
                x = i + 1
                break
        print(x)
        t = t - 1
    
if __name__ == '__main__':
    main()
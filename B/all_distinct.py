def main():
    t = int(input())
    while t:
        n = int(input())
        w = list(map(int, input().split()))
        st = set(w)
        k = len(st)
        x = n - k
        if x % 2 == 0:
            print(k)
        else:
            print(k - 1)
        
        t = t - 1
            
if __name__ == '__main__':
    main()
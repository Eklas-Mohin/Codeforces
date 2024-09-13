def main():
    n = int(input())
    lst = list(map(int, input().split()))
    pr = lst.count(1)
    ma = lst.count(2)
    pe = lst.count(3)
    w = min(pr, min(ma, pe))
    a = b = c = 0
    print(w)
    for i in range(w):
        x = lst.index(1, a, n)
        a = x + 1
        x = lst.index(2, b, n)
        b = x + 1
        x = lst.index(3, c, n)
        c = x + 1
        print(a, b, c)
    
if __name__ == '__main__':
    main()
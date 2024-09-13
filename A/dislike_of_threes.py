def main():
    w = []
    x = 0
    k = 1
    while x < 1000:
            if k % 3 != 0 and k % 10 != 3:
                w.append(k)
                x = x + 1
            k = k + 1
    t = int(input())
    while t:
        n = int(input())
        print(w[n - 1])
        t = t - 1
    
if __name__ == '__main__':
    main()
def main():
    t = int(input())
    while t:
        x = int(input())
        k = x % 10
        c = k
        a = 0
        for i in range(1, k):
            j = i
            while True:
                if j > 9999:
                    break
                else:
                    a = a + len(str(j))
                j = j * 10 + i
        while True:
                if k > x:
                    break
                else:
                    a = a + len(str(k))
                k = k * 10 + c
        print(a)
        t = t - 1
            
if __name__ == '__main__':
    main()
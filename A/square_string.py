def main():
    t = int(input())
    while t:
        s = input()
        a = b = ''
        l = len(s)
        for i in range(l // 2):
            a = a + s[i]
        for i in range(l // 2, l):
            b = b + s[i]
        if a == b:
            print('YES')
        else:
            print('NO')
        t = t - 1
            
if __name__ == '__main__':
    main()
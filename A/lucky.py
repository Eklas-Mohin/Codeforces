def main():
    t = int(input())
    while t:
        w = input()
        fh = sh = 0
        for x in range(3):
            fh = fh + int(w[x])
        for x in range(3, 6):
            sh = sh + int(w[x])
        if fh == sh:
            print('YES')
        else:
            print('NO')
        t = t - 1
    
if __name__ == '__main__':
    main()
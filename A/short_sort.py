def main():
    t = int(input())
    r = 'abc'
    while t:
        s = input()
        flag = False
        for i in range(3):
            if s[i] == r[i]:
                flag = True
                break
        if flag:
            print('YES')
        else:
            print('NO')
        t = t - 1
            
if __name__ == '__main__':
    main()
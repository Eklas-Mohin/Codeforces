def main():
    t = int(input())
    s = 'codeforces'
    while t:
        c = input()
        if c in s:
            print('YES')
        else:
            print('NO')
        t = t - 1
    
if __name__ == '__main__':
    main()
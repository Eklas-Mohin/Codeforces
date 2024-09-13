def main():
    t = int(input())
    while t:
        s = input()
        ln = len(s)
        op = s[0] + s[1]
        for i in range(3, ln, 2):
            op = op + s[i]
        print(op)
        t = t - 1
    
if __name__ == '__main__':
    main()
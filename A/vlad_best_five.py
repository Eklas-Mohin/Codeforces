def main():
    t = int(input())
    while t:
        s = input()
        a = s.count('A')
        b = s.count('B')
        if a > b:
            print('A')
        else:
            print('B')
        t = t - 1
            
if __name__ == '__main__':
    main()
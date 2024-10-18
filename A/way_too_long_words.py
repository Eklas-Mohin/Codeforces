def main():
    n = int(input())
    
    for _ in range(n):
        s = input()
        length = len(s)
        
        if length > 10:
            print(f"{s[0]}{length - 2}{s[-1]}")
        else:
            print(s)

if __name__ == '__main__':
    main()

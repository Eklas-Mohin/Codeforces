def main():
    w = list(map(int, input().split()))
    s = input()
    v = 0
    for c in s:
        v = v + w[int(c) - 1]
    print(v)
            
if __name__ == '__main__':
    main()
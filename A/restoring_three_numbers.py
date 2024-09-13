def main():
    w = list(map(int, input().split()))
    w.sort()
    a = w[3] - w[2]
    b = w[0] - a
    c = w[3] - a - b
    print(a, b, c)
    
if __name__ == '__main__':
    main()
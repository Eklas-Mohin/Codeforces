def main():
    t = int(input())
    while t:
        w = list(map(int, input().split()))
        if w[0] < 3:
            print(1)
        else:
            print(1 + ((w[0] + w[1] - 3) // w[1]))
        t = t - 1
            
if __name__ == '__main__':
    main()
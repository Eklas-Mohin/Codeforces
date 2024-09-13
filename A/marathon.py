def main():
    t = int(input())
    while t:
        w = list(map(int, input().split()))
        ans = 0
        for x in range(1, 4):
            if w[x] > w[0]:
                ans = ans + 1
        print(ans)
        t = t - 1
    
if __name__ == '__main__':
    main()
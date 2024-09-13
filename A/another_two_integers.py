def main():
    t = int(input())
    while t:
        w = list(map(int, input().split()))
        ans = (abs(w[0] - w[1]) + 9) // 10
        print(ans)
        t = t - 1
    
if __name__ == '__main__':
    main()
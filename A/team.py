def main():
    n = int(input())
    ans = 0
    
    for _ in range(n):
        a, b, c = map(int, input().split())
        if a + b + c > 1:
            ans += 1
    
    print(ans)
    
if __name__ == "__main__":
    main()
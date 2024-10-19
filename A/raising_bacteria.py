def main():
    n = int(input())
    res = 0
    
    while n > 0:
        res += n % 2
        n = n // 2
    
    print(res)
    
if __name__ == "__main__":
    main()
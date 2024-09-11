def main():
    input_list = input().split(' ')
    n = int(input_list[0])
    t = 240 - int(input_list[1])
    x = 5
    ans = 0
    while t - x >= 0 and ans < n:
        ans = ans + 1
        t = t - x
        x = x + 5
    print(ans)
    
if __name__ == '__main__':
    main()
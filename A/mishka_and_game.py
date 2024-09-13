def main():
    n = int(input())
    m = c = 0
    for i in range(n):
        w = list(map(int, input().split()))
        if w[0] > w[1]:
            m += 1
        elif w[0] < w[1]:
            c += 1
    if m > c:
        print('Mishka')
    elif c > m:
        print('Chris')
    else:
        print('Friendship is magic!^^')
    
if __name__ == '__main__':
    main()
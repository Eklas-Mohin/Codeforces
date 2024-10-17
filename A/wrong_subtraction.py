def wrong_subtraction(n, k):
    for _ in range(k):
        if n % 10 == 0:
            n //= 10
        else:
            n -= 1
    return n

if __name__ == '__main__':
    n, k = map(int, input().split())
    print(wrong_subtraction(n, k))

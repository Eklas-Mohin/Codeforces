def main():
    w = list(map(int, input().split()))
    a1 = min(w[0], w[1])
    a2 = (w[0] + w[1] - 2 * a1) // 2
    print(a1, a2)

if __name__ == '__main__':
    main()
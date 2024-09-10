def main():
    input_list = input().split(' ')
    length = len(input_list)
    x = []

    for i in range(length):
        x.append(int(input_list[i]))
    x.sort()

    b = x[1] - x[0]
    a = x[2] - x[1]
    print(a + b)


if __name__ == '__main__':
    main()
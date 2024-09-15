def main():
        w = int(input())
        k = w // 2
        print(k)
        if w % 2:
            k = k - 1
        for i in range(k):
            print(2, end = ' ')
        if w % 2:
            print(3)
            
if __name__ == '__main__':
    main()
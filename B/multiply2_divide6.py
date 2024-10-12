# ******************************* #
#    author:  mohin               #
#    problem: Codeforces 1374B    #
#    verdict: Accepted            #
# ******************************* #

def main():
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        two = three = 0
        
        while n % 2 == 0:
            two += 1
            n //= 2

        while n % 3 == 0:
            three += 1
            n //= 3
            
        if n != 1 or two > three:
            print(-1)
        else:
            print(2 * three - two)
            
if __name__ == '__main__':
    main()

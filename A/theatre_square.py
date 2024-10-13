# *************************** #
#   author:  mohin            #
#   problem: Codeforces 1A    #
#   verdict: Accepted         #
# *************************** #

def main():
    n, m, a = map(int, input().split())
    r = (n + a - 1) // a
    c = (m + a - 1) // a
    print(r * c)
    
if __name__ == '__main__':
    main()
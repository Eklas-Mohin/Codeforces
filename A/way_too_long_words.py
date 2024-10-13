# *************************** #
#   author:  mohin            #
#   problem: Codeforces 71A   #
#   verdict: Accepted         #
# *************************** #

def solve(s: str) -> str:
    length = len(s)
    
    if length > 10:
        return f"{s[0]}{length - 2}{s[-1]}"
    return s

def main():
    n = int(input())
    
    for _ in range(n):
        s = input()
        print(solve(s))

if __name__ == "__main__":
    main()

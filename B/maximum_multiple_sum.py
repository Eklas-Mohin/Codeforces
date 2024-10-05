''' author: mohin 
    problem: Codeforces 1985B
'''

def main():
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        
        if n < 4:
            print(n)
        else:
            print(2)

if __name__ == '__main__':
    main()

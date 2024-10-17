def max_value(a, b, c):
    max_val = max(a * b * c, a + b + c)
    max_val = max(max_val, a + (b * c))
    max_val = max(max_val, a * (b + c))
    max_val = max(max_val, (a + b) * c)
    return max_val

def main():
    a = int(input())
    b = int(input())
    c = int(input())
    max_val = max_value(a, b, c)
    print(max_val)

if __name__ == "__main__":
    main()
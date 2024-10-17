def main():
    s = input()

    lower = sum(1 for c in s if c.islower())
    upper = sum(1 for c in s if c.isupper())

    if upper > lower:
        s = s.upper()
    else:
        s = s.lower()

    print(s)

if __name__ == "__main__":
    main()

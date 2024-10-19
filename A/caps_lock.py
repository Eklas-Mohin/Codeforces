def main():
    str_input = input().strip()
    
    cnt = sum(1 for char in str_input if char.isupper())
    length = len(str_input)

    if cnt == length:
        str_input = str_input.lower()
    elif (cnt + 1) == length and str_input[0].islower():
        str_input = str_input.lower()
        str_input = str_input[0].upper() + str_input[1:]

    print(str_input)

if __name__ == "__main__":
    main()

def main():
    str_input = input()
    
    if str_input[0].islower():
        str_input = str_input[0].upper() + str_input[1:]

    print(str_input)

if __name__ == "__main__":
    main()

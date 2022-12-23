def main():
    s = get_height()
    for i in range(s):
        print("#")


def get_height():
    while True:
        s = int(input("Enter height: "))
        if s > 0:
            return s


main()
help(print)

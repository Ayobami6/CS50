from sys import argv

if len(argv) != 2:
    print("Missing command lne args")
    exit(1)
else:
    print(f"Hello, {argv[1]}")
    exit(0)

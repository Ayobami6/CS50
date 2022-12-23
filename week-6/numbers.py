import sys

numbers = [1, 2, 3, 4, 5, 6, 0]

if 0 in numbers:
    print("Found")
    sys.exit(0)

print("Not found")
sys.exit(1)

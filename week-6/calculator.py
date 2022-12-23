try:
    x = int(input("x: "))
except ValueError as ve:
    print(ve)
    exit()
try:
    y = int(input("y: "))
except ValueError as ve:
    print(ve)
    exit()

print(x + y)

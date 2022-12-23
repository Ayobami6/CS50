people = {
    "Ayo": "+234566667766",
    "Bami": "+23488775799"
}

name = input("Enter name: ")

if name in people:
    number = people[name]
    print(f"Number is {number}")

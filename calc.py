print("Welcome to the calculator!")

def subtraction(x, y):
    return x - y

def addition(x, y):
    return x + y

def multiplication(x, y):
    return x * y

def division(x, y):
    if x or y == 0:
        return "Error: Can not divide by zero"
    return x / y

operations = {
    1: ("Addition", addition),
    2: ("Subtraction", subtraction),
    3: ("Multiplication", multiplication),
    4: ("Division", division)
}

while(True):
    try:

        what_calc = int(input("Press 1 for addition\n"
                        "Press 2 for subtraction\n"
                        "Press 3 for division\n"
                        "Press 4 for multiplication\n"
                        "Press 5 to exit the calculator: "))
        
        if(what_calc == 5):
            print("Come back soon!")
            break
        elif what_calc not in operations:
            print("Invalid input.")
        
        num1 = int(input("Num 1: "))
        num2 = int(input("Num 2: "))
        
        operation_name, operation_func = operations[what_calc]
        result = operation_func(num1, num2)
        print(f"result of {operation_name} is {result}")

    except ValueError:
        print("Values must be of type integer")
def subtraction(x, y):
    return x - y


def addition(x, y):
    return x + y


def multiplication(x, y):
    return x * y


def division(x, y):
    if y == 0:
        raise ZeroDivisionError("Can not divide by zero")
    return x / y


arithmetics = {
    '+': ("Addition", addition),
    '-': ("Subtraction", subtraction),
    '*': ("Multiplication", multiplication),
    '/': ("Division", division)
}

try:
    num1 = int(input("Enter first number: "))
    what_arithmetic = input("Enter arithmetic: ")
    num2 = int(input("Enter second num: "))

    operation_name, operation_func = arithmetics[what_arithmetic]
    result = operation_func(num1, num2)

    print(f"Result of {operation_name} is {result}")

except (ValueError, KeyError) as e:
    if isinstance(e, ValueError):
        print("Value must be of type integer")
    elif isinstance(e, KeyError):
        print("Arithmetic must be valid")
except ZeroDivisionError as zde:
    print(zde)
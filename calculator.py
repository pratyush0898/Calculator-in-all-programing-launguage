Recreate it in the Java programming language

def addition(a, b):
    return a + b

def subtraction(a, b):
    return a - b

def multiplication(a, b):
    return a * b

def division(a, b):
    return a / b

def power(a, b):
    return a ** b

def modulo(a, b):
    return a % b

def negation(a):
    return -a

def abs(a):
    return abs(a)

def invert(a):
    return 1 / a

def conjugate(a):
    return a

def real(a):
    return a

def imag(a):
    return 0

def main():
    a = int(input('first number: '))
    b = int(input('second number: '))
    oprator = int(input('oprator: '))

    if oprator == 1:
        print(addition(a, b))
    elif oprator == 2:
        print(subtraction(a, b))
    elif oprator == 3:
        print(multiplication(a, b))
    elif oprator == 4:
        print(division(a, b))
    elif oprator == 5:
        print(power(a, b))
    elif oprator == 6:
        print(modulo(a, b))
    elif oprator == 7:
        print(negation(a))
    elif oprator == 8:
        print(abs(a))
    elif oprator == 9:
        print(invert(a))
    elif oprator == 10:
        print(conjugate(a))
    elif oprator == 11:
        print(real(a))

if __name__ == '__main__':
    main()

#include <iostream>
#include <cmath>

double addition(double a, double b) {
    return a + b;
}

double subtraction(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    return a / b;
}

double power(double a, double b) {
    return std::pow(a, b);
}

double modulo(double a, double b) {
    return std::fmod(a, b);
}

double negation(double a) {
    return -a;
}

double absValue(double a) {
    return std::fabs(a);
}

int main() {
    double a, b;
    int operatorChoice;

    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;

    std::cout << "Choose an operator:" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Power" << std::endl;
    std::cout << "6. Modulo" << std::endl;
    std::cout << "7. Negation" << std::endl;
    std::cout << "8. Absolute value" << std::endl;

    std::cin >> operatorChoice;

    switch (operatorChoice) {
        case 1:
            std::cout << "Result: " << addition(a, b) << std::endl;
            break;
        case 2:
            std::cout << "Result: " << subtraction(a, b) << std::endl;
            break;
        case 3:
            std::cout << "Result: " << multiplication(a, b) << std::endl;
            break;
        case 4:
            std::cout << "Result: " << division(a, b) << std::endl;
            break;
        case 5:
            std::cout << "Result: " << power(a, b) << std::endl;
            break;
        case 6:
            std::cout << "Result: " << modulo(a, b) << std::endl;
            break;
        case 7:
            std::cout << "Result: " << negation(a) << std::endl;
            break;
        case 8:
            std::cout << "Result: " << absValue(a) << std::endl;
            break;
        default:
            std::cout << "Invalid operator choice." << std::endl;
            break;
    }

    return 0;
}

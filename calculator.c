#include <stdio.h>
#include <math.h>

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
    return pow(a, b);
}

double modulo(double a, double b) {
    return fmod(a, b);
}

double negation(double a) {
    return -a;
}

double absValue(double a) {
    return fabs(a);
}

double reciprocal(double a) {
    return 1.0 / a;
}

int main() {
    double a, b;
    int operatorChoice;

    printf("Enter the first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);
    printf("Choose an operator:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Modulo\n");
    printf("7. Negation\n");
    printf("8. Absolute value\n");
    printf("9. Reciprocal (Invert)\n");
    printf("10. Conjugate (Not applicable for real numbers)\n");
    printf("11. Real part (Already real)\n");
    scanf("%d", &operatorChoice);

    switch (operatorChoice) {
        case 1:
            printf("Result: %.2lf\n", addition(a, b));
            break;
        case 2:
            printf("Result: %.2lf\n", subtraction(a, b));
            break;
        case 3:
            printf("Result: %.2lf\n", multiplication(a, b));
            break;
        case 4:
            printf("Result: %.2lf\n", division(a, b));
            break;
        case 5:
            printf("Result: %.2lf\n", power(a, b));
            break;
        case 6:
            printf("Result: %.2lf\n", modulo(a, b));
            break;
        case 7:
            printf("Result: %.2lf\n", negation(a));
            break;
        case 8:
            printf("Result: %.2lf\n", absValue(a));
            break;
        case 9:
            printf("Result: %.2lf\n", reciprocal(a));
            break;
        default:
            printf("Invalid operator choice.\n");
    }

    return 0;
}

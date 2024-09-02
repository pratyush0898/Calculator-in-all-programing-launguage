import java.util.Scanner;

public class CalculatorApp {
    public static double addition(double a, double b) {
        return a + b;
    }

    public static double subtraction(double a, double b) {
        return a - b;
    }

    public static double multiplication(double a, double b) {
        return a * b;
    }

    public static double division(double a, double b) {
        return a / b;
    }

    public static double power(double a, double b) {
        return Math.pow(a, b);
    }

    public static double modulo(double a, double b) {
        return a % b;
    }

    public static double negation(double a) {
        return -a;
    }

    public static double absValue(double a) {
        return Math.abs(a);
    }

    public static double reciprocal(double a) {
        return 1.0 / a;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double a, b;
        int operatorChoice;

        System.out.print("Enter the first number: ");
        a = scanner.nextDouble();

        System.out.print("Enter the second number: ");
        b = scanner.nextDouble();

        System.out.println("Choose an operator:");
        System.out.println("1. Addition");
        System.out.println("2. Subtraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");
        System.out.println("5. Power");
        System.out.println("6. Modulo");
        System.out.println("7. Negation");
        System.out.println("8. Absolute value");

        operatorChoice = scanner.nextInt();

        switch (operatorChoice) {
            case 1:
                System.out.printf("Result: %.2f%n", addition(a, b));
                break;
            case 2:
                System.out.printf("Result: %.2f%n", subtraction(a, b));
                break;
            case 3:
                System.out.printf("Result: %.2f%n", multiplication(a, b));
                break;
            case 4:
                System.out.printf("Result: %.2f%n", division(a, b));
                break;
            case 5:
                System.out.printf("Result: %.2f%n", power(a, b));
                break;
            case 6:
                System.out.printf("Result: %.2f%n", modulo(a, b));
                break;
            case 7:
                System.out.printf("Result: %.2f%n", negation(a));
                break;
            case 8:
                System.out.printf("Result: %.2f%n", absValue(a));
                break;
            default:
                System.out.println("Invalid operator choice.");
                break;
        }
    }
}

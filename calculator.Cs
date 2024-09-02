Recrate it in the C++ programming language

using System;

namespace CalculatorApp
{
    class Program
    {
        static double Addition(double a, double b)
        {
            return a + b;
        }

        static double Subtraction(double a, double b)
        {
            return a - b;
        }

        static double Multiplication(double a, double b)
        {
            return a * b;
        }

        static double Division(double a, double b)
        {
            return a / b;
        }

        static double Power(double a, double b)
        {
            return Math.Pow(a, b);
        }

        static double Modulo(double a, double b)
        {
            return a % b;
        }

        static double Negation(double a)
        {
            return -a;
        }

        static double AbsValue(double a)
        {
            return Math.Abs(a);
        }

        static double Reciprocal(double a)
        {
            return 1.0 / a;
        }

        static void Main(string[] args)
        {
            double a, b;
            int operatorChoice;

            Console.Write("Enter the first number: ");
            a = Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter the second number: ");
            b = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Choose an operator:");
            Console.WriteLine("1. Addition");
            Console.WriteLine("2. Subtraction");
            Console.WriteLine("3. Multiplication");
            Console.WriteLine("4. Division");
            Console.WriteLine("5. Power");
            Console.WriteLine("6. Modulo");
            Console.WriteLine("7. Negation");
            Console.WriteLine("8. Absolute value");

            operatorChoice = Convert.ToInt32(Console.ReadLine());

            switch (operatorChoice)
            {
                case 1:
                    Console.WriteLine($"Result: {Addition(a, b):F2}");
                    break;
                case 2:
                    Console.WriteLine($"Result: {Subtraction(a, b):F2}");
                    break;
                case 3:
                    Console.WriteLine($"Result: {Multiplication(a, b):F2}");
                    break;
                case 4:
                    Console.WriteLine($"Result: {Division(a, b):F2}");
                    break;
                case 5:
                    Console.WriteLine($"Result: {Power(a, b):F2}");
                    break;
                case 6:
                    Console.WriteLine($"Result: {Modulo(a, b):F2}");
                    break;
                case 7:
                    Console.WriteLine($"Result: {Negation(a):F2}");
                    break;
                case 8:
                    Console.WriteLine($"Result: {AbsValue(a):F2}");
                    break;
                default:
                    Console.WriteLine("Invalid operator choice.");
                    break;
            }
        }
    }
}

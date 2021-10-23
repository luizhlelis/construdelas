using System;
using Ada.Filho;

namespace Ada
{
    class Program
    {
        static void Main (String[] args)
        {
            Console.WriteLine("Calculadora");
            Project.ChamaProjetoFilho();
            var num1 = int.Parse(args[0]);
            var num2 = int.Parse(args[1]);
            var result = Multiplicar(num1, num2);
            Console.WriteLine("Resultado: " + result);
        }

        static int Multiplicar(int a, int b)
        {
            return a * b;
        }
    }
}
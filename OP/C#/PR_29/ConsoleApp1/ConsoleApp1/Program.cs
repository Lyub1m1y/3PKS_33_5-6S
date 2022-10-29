using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection.Emit;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;


namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            const int sum = 180;
            int a, b;
            Console.WriteLine("a = "); 
            a = int.Parse(Console.ReadLine());
            Console.WriteLine("b = "); 
            b = int.Parse(Console.ReadLine());
            int flag = 0;
            int ssum = sum-(a+b); 
            if ((ssum > 0) && (ssum < 90)) {
                Console.WriteLine("Ostrougolniy");
            } else if (ssum == 90) {
                Console.WriteLine("Prymougolniy");
            } else if ((ssum > 90) && (ssum < 180))
            {
                Console.WriteLine("Tupoougolniy");
            }
            else if (flag == 1) {
                Console.WriteLine("Ti durachok? Vvedi summu dvuh chisel > 0 && < 180");
            } else {
                flag = 1;
            }
            Console.ReadKey();
        }
    }
}

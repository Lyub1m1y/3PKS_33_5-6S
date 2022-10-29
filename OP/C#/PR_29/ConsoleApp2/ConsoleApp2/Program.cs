using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num;
            Console.WriteLine("num = ");
            num = int.Parse(Console.ReadLine());
            
            int flag = 0;
            if ((num > 0) && (num < 50))
            {
                Console.WriteLine("Neudovletvoritelno");
            }
            else if ((num > 50) && (num < 75))
            {
                Console.WriteLine("Udovletvoritelno");
            }
            else if ((num >= 76) && (num <= 85))
            {
                Console.WriteLine("HOROSHO");
            }
            else if ((num > 85) && (num < 100))
            {
                Console.WriteLine("HOROSHO");
            }
            else if (flag == 1)
            {
                Console.WriteLine("Ti durachok? Vvedi schislo > 0 && < 100");
            }
            else
            {
                flag = 1;
            }
            Console.ReadKey();
        }
    }
}

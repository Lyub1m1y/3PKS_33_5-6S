using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace task11
{
    class Program
    {
        public static void fabFor(int j, int end)
        {
            Console.Write("for: ");
            for (int i = 1; i <= end; i += j)
            {
                Console.Write("{0} ", i);
                j = i - j;
            }
            Console.Write('\n');
        }

        public static void fabWhile(int j, int end)
        {
            Console.Write("while: ");
            int i = j;
            while (i <= end)
            {
                Console.Write("{0} ", i);
                j = i - j;
                i += j;
            }
            Console.Write('\n');
        }

        public static void fabDoWhile(int j, int end)
        {
            Console.Write("do while: ");
            int i = j;
            do
            {
                Console.Write("{0} ", i);
                j = i - j;
                i += j;
            }
            while (i <= end);
            Console.Write('\n');
        }

        public static int Main()
        {
            Console.Write("Enter from 1 to : ");
            int end = int.Parse(Console.ReadLine());
            int j = 1;
            fabFor(j, end);
            fabWhile(j, end);
            fabDoWhile(j, end);
            Console.ReadKey();
            return 0;
        }
    }
}

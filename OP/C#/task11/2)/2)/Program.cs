using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2_
{
    internal class Program
    {
        static void methSwitch()
        {
            Console.Write("Please enter day of the week: \n");
            string str = Console.ReadLine();
            int i = 0;
            switch (str)
            {
                case "Monday":
                    Console.Write("1");
                    break;
                case "Tuesday":
                    Console.Write("2");
                    break;
                case "Wednesday":
                    Console.Write("3");
                    break;
                case "Thursday":
                    Console.Write("4");
                    break;
                case "Friday":
                    Console.Write("5");
                    break;
                case "Saturday":
                    Console.Write("6");
                    break;
                case "Sunday":
                    Console.Write("7");
                    break;
                default:
                    Console.Write("There is no such day :(");
                    break;
            }
            Console.ReadKey();
        }

            static void methIf() {
            Console.Write("Please enter day of the week: \n");
            string str = Console.ReadLine();
            int i = 0;
            if (str == "Monday")
            {
                Console.Write("1");
                i++;
            }
            if (str == "Tuesday")
            {
                Console.Write("2");
                i++;
            }
            if (str == "Wednesday")
            {
                Console.Write("3");
                i++;
            }
            if (str == "Thursday")
            {
                Console.Write("4");
                i++;
            }
            if (str == "Friday")
            {
                Console.Write("5");
                i++;
            }
            if (str == "Saturday")
            {
                Console.Write("6");
                i++;
            }
            if (str == "Sunday")
            {
                Console.Write("7");
                i++;
            }
            if (i != 1)
            {
                Console.Write("There is no such day :(");
            }
            Console.ReadKey();
        }

        static void Main(string[] args)
        {
            Console.Write("if(1) || switch(2)\n");
            string str = Console.ReadLine();
            if (str == "1") {
                methIf();
            } else if (str == "2") { 
                methSwitch();
            }
            
            
        }
    }
}

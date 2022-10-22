using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection.Emit;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace PR_28
{
    class Program
    {
        static void Main()
        {
            Console.Write("a = ");
            double a, b, x, w, y, tempW1, tempW2, tempY1, tempY2;
            a = float.Parse(Console.ReadLine());
            Console.Write("b = ");
            b = float.Parse(Console.ReadLine());
            Console.Write("x = ");
            x = float.Parse(Console.ReadLine());
            tempW1 = Math.Sqrt((x * x) + b);
            tempW2 = (b * b) * (Math.Pow(Math.Sin(x + a), 3)) / x;
            w = tempW1 - tempW2;
            tempY1 = (Math.Pow(Math.Sin(x * x * x), 2));
            tempY2 = x / (Math.Sqrt((a * a) + (b * b)));
            y = tempY1 - tempY2;
            string strW, strY;
            strW = w.ToString();
            strY = y.ToString();
            Console.Write("W = " + strW + '\n' + "Y = " + strY + '\n');
        }   
    }
}

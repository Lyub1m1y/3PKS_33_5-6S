using Microsoft.VisualBasic;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
namespace task10
{
    class Program
    {

        static void Main(string[] args)
        {
            char odin = '1';
            char nol = '0';
            string number = Interaction.InputBox("Введите число:", "Проверка");
            StringBuilder sb = new StringBuilder(number);
            if (sb[1] == '1')
            {
                sb[1] = nol;
            } else if (sb[1] == '0') {
                sb[1] = odin;
            }
            number = sb.ToString();
            string txt = Convert.ToString(number);
            MessageBox.Show(txt);
        }
    }
}

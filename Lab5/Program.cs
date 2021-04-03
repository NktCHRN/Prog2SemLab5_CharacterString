using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using StringsLib;

namespace Lab5
{
    class Program
    {
        static void Main(string[] args)
        {
            ProgramInfo();
            Console.WriteLine("\nEnter the string: ");
            char[] charArray = EnterCharArray();                            // создание экземпляра производного класса
            CharacterString s = new StringsLib.CharacterString(in charArray);
            Console.WriteLine("\nYour string: ");
            Console.WriteLine(s.GetCharArray());                            // выводим строку
            Console.WriteLine("Your string length is {0}.", s.GetLength()); // вызов метода - получения длины строки
            s.Sort();                                                       // вызов метода-сортировки строки (по убыванию)
            Console.WriteLine("\nYour string after sorting: ");
            Console.WriteLine(s.GetCharArray());                            // выводим строку
            Console.WriteLine("Your string length is {0}.", s.GetLength());
            Console.WriteLine("\nPress any key to quit");
            Console.ReadKey();
        }
        static void ProgramInfo()							                // вывод информации о программе
        {
            Console.WriteLine("Lab N5. Nikita Chernikov, IS-02");
            Console.WriteLine("Researching of mechanism of inheritance");
            Console.WriteLine("Variant 15");
        }
        static char[] EnterCharArray()                                      // ввод массива символов
        {
            int length = 0;
            char currentCharacter;
            char[] charArray = new char[length];
            int i = -1;
            currentCharacter = (char)Console.Read();
            while (currentCharacter != '\r')
            {
                i++;
                length++;
                char[] temp = new char[length];                             // при помощи временного массива делаем resize массива
                for (uint j = 0; j < length - 1; j++)
                   temp[j] = charArray[j];
                charArray = temp;
                charArray[i] = currentCharacter;
                currentCharacter = (char)Console.Read();		            // считываем символ с клавиатуры
            }
            Console.Read();
            return charArray;
        }
    }
}

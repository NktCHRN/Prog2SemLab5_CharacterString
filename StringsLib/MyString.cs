using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StringsLib
{
    public class MyString
    {
        protected char[] _stringValue;              // значение строки - массив char`ов
        protected int _length;                      // длина строки
        public MyString(in char[] value)            // конструктор с параметрами
        {
            if (value != null)
            {
                _length = value.Length;
                _stringValue = value;
            }
            else
            {
                _length = 0;
                _stringValue = new char[0];
            }
        }
        public int GetLength()                      // метод получения длины строки
        {
            return _length;
        }
    }
}

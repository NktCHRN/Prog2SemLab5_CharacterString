using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StringsLib
{
    public class CharacterString : MyString
    {
        public CharacterString(in char[] value) : base(in value) {  }       // конструктор с параметром, вызывающий конструктор с параметром базового класса
        public void Sort()                                          // метод сортировки строки по убыванию при помощи алгоритма Insertion Sort (с конца - в начало, т.к. по убыванию)
        {
            char key;
            int i;
            for (int j = _length - 2; j >= 0; j--)
            {                                                       // проходим все элементы массива, кроме последнего
                key = _stringValue[j];                              // ключ - проходимый элемент
                i = j + 1;                                          // индекс следующего элемента
                while (i < _length && _stringValue[i] >= key)
                {                                                   // перебираем элементы от ключевого в конец, пока они меньше или равны ему
                    _stringValue[i - 1] = _stringValue[i];          // присваиваем предыдущему элементу значение этого
                    i++;
                }
                _stringValue[i - 1] = key;                          // "вставляем" ключ на нужную позицию
            }
        }
        public char[] GetCharArray()                                   // метод получения строки - массива char`ов
        {
            char[] charArrayCopy = new char[_length];               // копия массива char`ов
            for (int i = 0; i < _length; i++)
                charArrayCopy[i] = _stringValue[i];
            return charArrayCopy;
        }
    }
}

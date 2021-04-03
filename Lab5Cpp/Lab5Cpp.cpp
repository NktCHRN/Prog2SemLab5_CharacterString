#include <iostream>
#include "ConsoleProjectLib.h"
#include "CharacterString.h"

using namespace std;

int main()
{
    ProgramInfo();
    cout << "\nEnter the string: " << endl;
    char* charArray = EnterCharArray();                            // создание объекта производного класса
    CharacterString s(charArray);
    delete[] charArray;
    cout << "\nYour string: " << endl;
    cout << s.GetCharArray() << endl;                            // выводим строку
    cout << "Your string length is " << s.GetLength() << "." << endl; // вызов метода - получения длины строки
    s.Sort();                                                       // вызов метода-сортировки строки (по убыванию)
    cout << "\nYour string after sorting: " << endl;
    cout << s.GetCharArray() << endl;                            // выводим строку
    cout << "Your string length is " << s.GetLength() << "." << endl;
    cout << endl;
    system("pause");
}
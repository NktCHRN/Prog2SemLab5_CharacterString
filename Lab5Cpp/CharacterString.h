#pragma once
#include "MyString.h"

class CharacterString : public MyString
{
public:
    CharacterString(const char* const value);             // конструктор с параметром, вызовающий конструктор с параметром базового класса
    void Sort();                                          // метод сортировки строки по убыванию при помощи алгоритма Insertion Sort (с конца - в начало, т.к. по убыванию)
    char* GetCharArray();                                 // метод получения массива символов
};
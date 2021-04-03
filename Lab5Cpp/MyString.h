#pragma once

class MyString {
protected:
	char* _stringValue;              // значение строки - массив char`ов
	int _length;					 // длина строки
public:
	MyString(const char* const value);            // конструктор с параметрами
	int GetLength();
	~MyString();
};
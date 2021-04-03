#include "MyString.h"

MyString::MyString(const char* const value)            // конструктор с параметрами
{
	_length = 0;
	if (value != nullptr) {							//проверяем на null-переданный параметр
		while (value[_length] != '\0')					//измеряем длину массива символов
			_length++;
		_stringValue = new char[_length + 1];
		for (unsigned int i = 0; i < _length; i++)	//записываем массив символов
			_stringValue[i] = value[i];
		_stringValue[_length] = '\0';					//ставим терминирующий ноль в конец массива
	}
	else {
		_stringValue = new char[1];					//создаем массив символов, состоящий только из терминирующего нуля
		_stringValue[0] = '\0';
	}
}

int MyString::GetLength()                      // метод получения длины строки
{
    return _length;
}

MyString::~MyString(){
	delete[] _stringValue;
}
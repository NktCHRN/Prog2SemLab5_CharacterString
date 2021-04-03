#include "MyString.h"

MyString::MyString(const char* const value)            // ����������� � �����������
{
	_length = 0;
	if (value != nullptr) {							//��������� �� null-���������� ��������
		while (value[_length] != '\0')					//�������� ����� ������� ��������
			_length++;
		_stringValue = new char[_length + 1];
		for (unsigned int i = 0; i < _length; i++)	//���������� ������ ��������
			_stringValue[i] = value[i];
		_stringValue[_length] = '\0';					//������ ������������� ���� � ����� �������
	}
	else {
		_stringValue = new char[1];					//������� ������ ��������, ��������� ������ �� �������������� ����
		_stringValue[0] = '\0';
	}
}

int MyString::GetLength()                      // ����� ��������� ����� ������
{
    return _length;
}

MyString::~MyString(){
	delete[] _stringValue;
}
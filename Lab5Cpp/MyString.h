#pragma once

class MyString {
protected:
	char* _stringValue;              // �������� ������ - ������ char`��
	int _length;					 // ����� ������
public:
	MyString(const char* const value);            // ����������� � �����������
	int GetLength();
	~MyString();
};
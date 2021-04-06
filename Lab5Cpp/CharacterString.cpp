#include "CharacterString.h"

CharacterString::CharacterString(const char* const value) : MyString(value) {	}       // ����������� � ����������, ���������� ����������� � ���������� �������� ������

void CharacterString::Sort()                                          // ����� ���������� ������ �� �������� ��� ������ ��������� Insertion Sort (� ����� - � ������, �.�. �� ��������)
{
    char key;
    int i;
    for (int j = _length - 2; j >= 0; j--)
    {                                                       // �������� ��� �������� �������, ����� ����������
        key = _stringValue[j];                              // ���� - ���������� �������
        i = j + 1;                                          // ������ ���������� ��������
        while (i < _length && _stringValue[i] >= key)
        {                                                   // ���������� �������� �� ��������� � �����, ���� ��� ������ ��� ����� ���
            _stringValue[i - 1] = _stringValue[i];          // ����������� ����������� �������� �������� �����
            i++;
        }
        _stringValue[i - 1] = key;                          // "���������" ���� �� ������ �������
    }
}

char* CharacterString::GetCharArray()                                   // ����� ��������� ������ - ������� char`��
{
    char* charArrayCopy = new char[_length + 1];               // ����� ������� char`��
    for (int i = 0; i < _length; i++)
        charArrayCopy[i] = _stringValue[i];
    charArrayCopy[_length] = '\0';
    return charArrayCopy;
}
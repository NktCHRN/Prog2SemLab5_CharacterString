#pragma once
#include "MyString.h"

class CharacterString : public MyString
{
public:
    CharacterString(const char* const value);             // ����������� � ����������, ���������� ����������� � ���������� �������� ������
    void Sort();                                          // ����� ���������� ������ �� �������� ��� ������ ��������� Insertion Sort (� ����� - � ������, �.�. �� ��������)
    char* GetCharArray();                                 // ����� ��������� ������� ��������
};
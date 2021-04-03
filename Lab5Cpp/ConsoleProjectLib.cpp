#include "ConsoleProjectLib.h"

char* EnterCharArray() {				// ���� ������� �����
	int length = 1;
	char* charArray = new char[length];
	int i = -1;
	do {
		i++;
		std::cin.get(charArray[i]);		// ��������� ������ � ����������
		length++;
		char* temp = new char[length];	// ��� ������ ���������� ������� ������ resize ������� (��������� ������� �����, ��� ������������� ���-�� ��������), ���� �� �������� '\n' �� ������� while
		for (unsigned int j = 0; j < length - 1; j++)
			temp[j] = charArray[j];
		delete[] charArray;
		charArray = temp;
	} while (charArray[i] != '\n');
	charArray[i] = '\0';				// � ����� ������ ������������� ����
	std::cin.clear();					// ������ �����
	return charArray;
}

void ProgramInfo()						// ����� ������ ���������� � ���������
{
	std::cout << "Lab N5. Nikita Chernikov, IS-02" << std::endl;
	std::cout << "Researching of mechanism of inheritance" << std::endl;
	std::cout << "Variant 15" << std::endl;
}
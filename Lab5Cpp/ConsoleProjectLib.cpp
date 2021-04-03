#include "ConsoleProjectLib.h"

char* EnterCharArray() {				// ввод массива строк
	int length = 1;
	char* charArray = new char[length];
	int i = -1;
	do {
		i++;
		std::cin.get(charArray[i]);		// считываем символ с клавиатуры
		length++;
		char* temp = new char[length];	// при помощи временного массива делаем resize массива (позволяет вводить более, чем фиксированное кол-во символов), пока не встретим '\n' по условию while
		for (unsigned int j = 0; j < length - 1; j++)
			temp[j] = charArray[j];
		delete[] charArray;
		charArray = temp;
	} while (charArray[i] != '\n');
	charArray[i] = '\0';				// в конце ставим терминирующий ноль
	std::cin.clear();					// чистим поток
	return charArray;
}

void ProgramInfo()						// вывод важной информации о программе
{
	std::cout << "Lab N5. Nikita Chernikov, IS-02" << std::endl;
	std::cout << "Researching of mechanism of inheritance" << std::endl;
	std::cout << "Variant 15" << std::endl;
}
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(0, "");

	int const size = 15;
	char buffer[size];

	gets_s(buffer);

	cout << "Количество элементов занято в массиве:" << strlen(buffer) << endl;

	cout << "Количество оставшихся свободных элементов: " << size - strlen(buffer) << endl;

	return 0;
}
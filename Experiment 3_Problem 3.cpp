#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	char array[50];
	int size;

	cout << "THIS PROGRAM PRINTS THE LETTERS IN CHARACTER ARRAY IN REVERSE ORDERE AND SHOWS THE SIZE OF THE ARRAY " << endl;
	cout << endl;

	cout << "Enter a charcter array: ";
	cin >> array;
	size = 0;

	while (array[size] != '\0') size++;

	cout << "\nThe reverse order of the given array is: ";

	for (int x = size - 1;x >= 0;x--)
	{
		cout << array[x];
	}

	cout << "\n\nThe size of the given array is: " << size;

	_getch();
	return 0;
}

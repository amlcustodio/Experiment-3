#include <iostream>
#include <conio.h>
#include <string> 

using namespace std;

int main()
{

	char str[50], temp;

	int i, j, cnt = 0;

	cout << "THIS PROGRAM PRINTS THE LETTERS IN CHARACTER ARRAY IN REVERSE ORDERE AND SHOWS THE SIZE OF THE ARRAY " << endl;
	cout << endl;

	cout << "Enter an array : ";
	gets_s(str);

	j = strlen(str) - 1;

	for (i = 0; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	cout << "\nReversed array: " << str << endl << endl;


	for (int i = 0; str[i]; i++)
	{
		cnt++;
	}

	cout << "Size of Array: " << cnt << endl;

	_getch();
	return 0;
}
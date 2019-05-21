#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << "THIS PROGRAM STORES TEMPERATURE OF PROVINCE A, PROVINCE B AND PROVINCE C FOR A WEEK" << endl;
	cout << endl;

	const int Province = 3;
	const int Week = 7;

	char province[3][3] = { "A", "B", "C" };
	int temp[Province][Week];

	cout << "Enter all temperature for a week of Province A, Province B and then Province C." << endl;
	cout << endl;

	for (int x = 0; x < Province; ++x)
	{
		for (int y = 0; y < Week; ++y)
		{
			cout << "Province " << province[x] << ", Day " << y + 1 << " : ";
			cin >> temp[x][y];
			cout << endl;
		}
	}

	cout << endl << endl;
	

	cout << "Displaying Values:" << endl;
	cout << endl;

	for (int x = 0; x < Province; ++x)
	{
		for (int y = 0; y < Week; ++y)
		{
			cout << "Province " << province[x] << ", Day " << x + 1 << " = " << temp[x][y] << endl;
		}
	}

	cout << endl;

	system("pause");
	_getch();
	return 0;
}
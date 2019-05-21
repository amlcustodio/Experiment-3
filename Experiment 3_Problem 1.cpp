#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int arr[10], x, max, min;
	float sum = 0;

	cout << "THIS PROGRAM SHOWS THE SMALLEST & LARGEST INTEGER, THE TOTAL AND THE AVERAGE OF THE GIVEN ARRAY" << endl;
	cout << endl;
	cout << "Please enter 10 elements: " << endl;
	cout << endl;

	for (x = 0; x < 10; x++)
	{
		cin >> arr[x];
	}

	for (x = 0; x < 10; x++)
	{
		sum = sum + arr[x];
	}

	max = arr[0];
	for (x = 0; x < 10; x++)
	{
		if (max < arr[x])
			max = arr[x];
	}

	min = arr[0];
	for (x = 0; x < 10; x++)
	{
		if (min > arr[x])
			min = arr[x];
	}

	cout << " \n Smallest integer : " << min << endl;
	cout << endl;
	cout << "\n Largest integer  : " << max << endl;
	cout << endl;
	cout << "\n Total            : " << sum << endl;
	cout << endl;
	cout << "\n Average          : " << setprecision(2) << fixed << sum / 10 << endl;

	_getch();
	return 0;
}
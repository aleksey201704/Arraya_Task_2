#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

const int n = 11;

void main()
{
	setlocale(LC_ALL, "");
	int v;
	int arr[n];
	cout << "¬ведите сдвиг число элементов = "; cin >> v;
	for (int i = 1; i <= 10; i++)
	{
		arr[i] = i;
		cout << arr[i] << " ";
	}


}
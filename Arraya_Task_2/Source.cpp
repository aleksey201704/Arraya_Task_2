#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

const int n = 11;
const int s = 11;
void main()
{
	setlocale(LC_ALL, "");
	int v,t;
	int arr[n],arrS[s];
	cout << "¬ведите сдвиг число элементов = "; cin >> v;
	for (int i = 1; i <= 10; i++)
	{
		arr[i] = i;
		cout << arr[i] << " ";
	}
	cout << endl;
	
	t = 11 - v;
	
	for (int i = 1; i <=v; i++)
	{
		arrS[i] = t;
		cout << arrS[i] << " ";
		t++;
	}

	for (int i = 1; i <=10-v ; i++)
	{
		cout << arr[i] << " ";
	}
}
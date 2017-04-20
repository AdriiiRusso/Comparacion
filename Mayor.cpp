#include <iostream>

using namespace std;

int main () {
	int a;
	int b;
	
	cout << "Comparación de los números A y B:" << endl;
	
	cout << "Ingrese el número A: ";
	cin >> a;
	cout << "Ingrese el número B: ";
	cin >> b;
	
	if (a > b)
	{
		cout << "El mayor es A" << endl;
	}
	if (a == b)
	{
		cout << "A y B son iguales" << endl;
	}
	else
	{
		cout << "El mayor es B" << endl;
	}
	
	system ("PAUSE");
}

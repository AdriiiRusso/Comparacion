#include <iostream>

using namespace std;

int main () {
	int a;
	int b;
	
	cout << "Comparaci�n de los n�meros A y B:" << endl;
	
	cout << "Ingrese el n�mero A: ";
	cin >> a;
	cout << "Ingrese el n�mero B: ";
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

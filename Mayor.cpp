/*
	"Mayor"
	"Adrián Russo"
	"20170403"
*/

#include <iostream>

using namespace std;

int main ()
{
	double a;
	double b;
	
	cout << "Mayor de A y B:" << endl;
	
	cout << "Ingrese A: ";
	cin >> a;
	cout << "Ingrese B: ";
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

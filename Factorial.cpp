#include <iostream>
using namespace std;

int Factorial (int A);

int main ()
{
	int N1;
	cout<<"Introduzca el valor del numero:  ";
	cin>>N1;
	int fac =Factorial (N1);
	cout<<"El factorial es:  "<<fac;
	return 0;
}
int Factorial (int A)
{
	int i;
	int Resultado = 1;
	for (i = 1; i <= A; i++)
	{
		Resultado *=i;
	}
	return Resultado;
}

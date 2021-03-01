#include <iostream>
using namespace std;

int suma (int a, int b);

int main ()
{
	int Num1, Num2, respuesta;
	cout<<"Ingrese El Primer Numero Entero:  ";
	cin>>Num1;
	cout<<"Ingrese El Segundo Numero Entero:  ";
	cin>>Num2;
	respuesta = suma (Num1, Num2);
   cout<<"La Respuesta De La Suma Es:  "<<respuesta;
	return 0;
}
int suma (int a, int b)
{
	int suma;
	suma = a + b;
	return suma;
}

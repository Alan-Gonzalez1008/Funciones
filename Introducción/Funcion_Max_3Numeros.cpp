#include <iostream>
using namespace std;

int Max (int A, int B);

int main ()
{
	int N1, N2, N3;
	cout<<"Ingresa el primer valor del primer numero entero:  ";
	cin>>N1;
	cout<<"Ingresa el Segundo valor del segundo numero entero:  ";
	cin>>N2;
	cout<<"Ingrsa el tercer valor del tercer numero entero:   ";
	cin>>N3;
	int max1 = Max(N1,N2);
	int max2 = Max(max1, N3);
	cout<<"El numero mayor es:  "<<max2;
	return 0;
}
int Max (int A, int B)
{
	int C;
	if (A>B)
	{
		C = A;
	}
	else
	{
		C = B;
	}
	return C;
}

#include <iostream>
using namespace std;

void Max (int A, int B);

int main ()
{
	int N1, N2;
	cout<<"Ingrese el primer valor del primer numero entero:  ";
	cin>>N1;
	cout<<"Ingrese el segundo valor del segundo numero entero:  ";
	cin>>N2;
    Max(N1,N2);
	return 0;
}
void Max (int A, int B)
{
	if (A>B)
	{
		cout<<"Es mayor"<<A;
	}
	else if (A<B)
	{
		cout<<"Es mayor"<<B;
	}
	else
	cout<<"Error";
}

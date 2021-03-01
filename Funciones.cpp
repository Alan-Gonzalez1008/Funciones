#include <iostream>
using namespace std;



int Leer ( void );
void Imprimir ( int X );
int main ( void );
int Costo ( int a );

int main ( void )
{
	int a, b;
	a = Leer();
	b = Costo ( a );
	Imprimir ( b );
	return 0;
}
int Leer ( void )
{
	int X;
	cout<<"Agregue el costo:  ";
	cin>>X;
	return X;
}
int Costo ( int a )
{
	int b;
	b = a;
	return b;
}
void Imprimir ( int b )
{
	if ( b<500)
	{ 
	cout<<" No hay descuento ";
	}
	if ((b>=500) && (b<=1000))
	{
		b = (b-(b*0.05));
		cout<<" El descuento es del 5 porciento ";
		cout<<"Lo que va a pagar es:  %d "<<b;	
	}
	if ((b>=1000) && (b<=7000))
	{
		b = (b-(b*.11));
	    cout<<"El descuento es del 11 porciento ";
		cout<<"Lo que va a pagar es:  "<<b;
	}
	if (( b>=7000) && (b<= 15000))
	{
      b = (b-(b*.18));
	    cout<<" El descuento es del 18 porciento "; 
	    cout<<" Lo que va a pagar es:  "<<b;
    }
	if ( b>15000)
	{
	   b = (b-(b*.25));
	   cout<<"El descuento es del 25 porciento ";
	   cout<<"Lo que va a pagar es: "<<b;                       	
	}
}

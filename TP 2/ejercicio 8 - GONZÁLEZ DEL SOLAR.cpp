/* 
	Laboratorio I 
	TP No 2
	Ejercicio 8: Asteriscos
	Autor: Lic. Francisco Javier Gonz�lez del Solar
*/

# include <iostream>
# include <math.h>
using namespace std;

main ()
{
	int num, value, aux;
	
	
	do 
	{
		cout<<"Ingrese n�mero natural: "<<endl;
		cin>>num;
	} while (num<=0);
	
	for(int i=1; i<=num; i++)
	{
		if(i>1)
		{
//			for(int j=0; j<=floor(num/2); j++)
//			{
//				cout<<" ";
//			}
			
			cout<<"*";
			for(int j=0; j<=i-2; j++)
			{
				cout<<"*";
			}
			cout<<"*"<<endl;
		}
		else
			cout<<"*"<<endl;
	}
}

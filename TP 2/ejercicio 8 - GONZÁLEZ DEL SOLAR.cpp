/* 
	Laboratorio I 
	TP No 2
	Ejercicio 8: Asteriscos
	Autor: Lic. Francisco Javier González del Solar
*/

# include <iostream>
# include <math.h>
using namespace std;

main ()
{
	int levels, stars, total, spaces;
		
	do 
	{
		cout<<"Ingrese la cantidad de niveles para la pirámide de asteriscos: "<<endl;
		cin>>levels;
	} while (levels<=0);
	
	
	total = levels * 2 - 1;
	stars = 1;
	
	for(int i=0; i<levels; i++)
	{
		spaces = floor((total - stars)/2);		
	
		for (int j=1; j<=spaces; j++)
		{
			cout<<" ";
		}
		
		for (int k=1; k<=stars; k++)
		{
			cout<<"*";
		}
		
		cout<<endl;	
		stars += 2;	
	}
}

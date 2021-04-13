/* 
	Laboratorio I 
	TP No 2
	Ejercicio 5: Averiguar primo
	Autor: Lic. Francisco Javier González del Solar
*/

# include <iostream>
using namespace std;

main ()
{
	int num, multiple_count, remainder;
	
	do 
	{
		cout<<"Ingrese número natural: "<<endl;
		cin>>num;
	} while (num<=0);
	

	multiple_count = 0;
	for (int i=1; i<=num; i++){
				
		if (num % i == 0){
			multiple_count++;
		}		
	}
	
	if (multiple_count <= 2)
		cout<<num<<" es un número primo"<<endl;
	else
		cout<<num<<" no es un número primo"<<endl;
}

/* 
	Laboratorio I 
	TP No 2
	Ejercicio 5: Averiguar primo
	Autor: Lic. Francisco Javier Gonz�lez del Solar
*/

# include <iostream>
using namespace std;

main ()
{
	int num, multiple_count, remainder;
	
	do 
	{
		cout<<"Ingrese n�mero natural: "<<endl;
		cin>>num;
	} while (num<=0);
	

	multiple_count = 0;
	for (int i=1; i<=num; i++){
				
		if (num % i == 0){
			multiple_count++;
		}		
	}
	
	if (multiple_count <= 2)
		cout<<num<<" es un n�mero primo"<<endl;
	else
		cout<<num<<" no es un n�mero primo"<<endl;
}

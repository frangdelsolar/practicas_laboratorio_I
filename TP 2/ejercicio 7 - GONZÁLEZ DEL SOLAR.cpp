/* 
	Laboratorio I 
	TP No 2
	Ejercicio 7: Fibonacci
	Autor: Lic. Francisco Javier Gonz�lez del Solar
*/

# include <iostream>
using namespace std;

main ()
{
	int num, value, aux;
	
	do 
	{
		cout<<"Ingrese n�mero natural: "<<endl;
		cin>>num;
	} while (num<=0);
	
	value = 0;
	for (int i=1; i<num; i++){
		aux = value;
		value += i;
		cout<<aux<<"  "<<i<<endl;
	}

}

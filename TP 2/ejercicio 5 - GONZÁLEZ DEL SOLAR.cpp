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
	int num, count, resto;
	
	do 
	{
		cout<<"Ingrese número natural: "<<endl;
		cin>>num;
	} while (num<=0);
	

	count = 0;
	for (int i=0; i<=num; i++){
		cout<<num<<"   "<<i<<endl;
		
		resto = num % i;
		
		cout<<resto<<endl;		
//		if (num % i == 0){
//			count++;
//		}
//		cout<<i<<"    "<<count<<endl;
	}
	
//	if (count <= 2)
//		cout<<num<<" es un número primo"<<endl;
//	else
//		cout<<num<<" no es un número primo"<<endl;

}

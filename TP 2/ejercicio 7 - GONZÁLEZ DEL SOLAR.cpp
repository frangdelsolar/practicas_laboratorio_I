/* 
	Laboratorio I 
	TP No 2
	Ejercicio 7: Fibonacci
	Autor: Lic. Francisco Javier González del Solar
*/

# include <iostream>
using namespace std;

main ()
{
	int num, prev1, prev2, current;
	
	cout<<"**********************"<<endl;
	cout<<"* Serie de Fibonacci *"<<endl;
	cout<<"**********************"<<endl;
	
	do 
	{
		cout<<"Ingrese número natural: "<<endl;
		cin>>num;
	} while (num<=0);

	prev1 = 0;
	prev2 = 0;
	current = 0;
	for (int i=0; i<num; i++){	
		if (i < 1){
			prev1 = 0;
			prev2 = 1;
			current = i;
		} else {
			prev1 = prev2;
			prev2 = current;	
			current = prev1 + prev2;		
		}			
		cout<<current<<", ";
	}
	
	cout<<"Su número: "<<num<<endl;
	cout<<"Anterior: "<<current<<endl;
	cout<<"Posterior:"<<current+prev2<<endl;

}

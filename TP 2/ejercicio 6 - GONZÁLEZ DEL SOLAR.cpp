/* 
	Laboratorio I 
	TP No 2
	Ejercicio 6: Secuencia 1, 5, 3, 7, 5, 9, 7, ... 23 hasta 100
	Autor: Lic. Francisco Javier González del Solar
*/

# include <iostream>
using namespace std;

main ()
{
	int value=1;
	
	cout<<"Secuencia (1 a 100): "<<endl;
	cout<<value<<endl;
	
	for (int i=1; i<100; i++){
		if(i%2==0)
			value -= 2;
		else
			value += 4;
		cout<<value<<endl;
	}

}

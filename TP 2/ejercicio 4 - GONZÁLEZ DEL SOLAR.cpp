/* 
	Laboratorio I 
	TP No 2
	Ejercicio 4: Múltiplos de 3 
	Autor: Lic. Francisco Javier González del Solar
*/

# include <iostream>
using namespace std;

main ()
{
	
	cout<<"Múltiplos de 3 (1 al 3000): "<<endl;
	
	// Not optimized
	for (int i=1; i<=3000; i++){
		if(i%3==0){
			cout<<i<<endl;
		}
	}

	// Almost hard coded
	for (int i=0; i<=3000; i+=3){
		cout<<i<<endl;
	}
}

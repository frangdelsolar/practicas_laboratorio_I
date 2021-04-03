/* 
	Laboratorio I 
	TP No 1
	Ejercicio 5: Mayor y menor
	Autor: Lic. Francisco Javier González del Solar
*/

# include <iostream>
using namespace std;

main(){
	
	float num_1, num_2, num_3, highest, lowest;
	
	cout<<"Ingrese el primer número: "<<endl;
	cin>>num_1;

	cout<<"Ingrese el segundo número: "<<endl;
	cin>>num_2;
	
	cout<<"Ingrese el tercer número: "<<endl;
	cin>>num_3;
	
	highest = num_1;	
	if (num_2 > highest){
		highest = num_2;
	}	
	if (num_3 > highest){
		highest = num_3;
	}
 
 	lowest = num_1;	
	if (num_2 < lowest){
		lowest = num_2;
	}	
	if (num_3 < lowest){
		lowest = num_3;
	}
	
	cout<<"Tus números son: "<<num_1<<", "<<num_2<<" y "<<num_3<<endl;
	cout<<"El mayor es: "<<highest<<endl;
	cout<<"El menor es: "<<lowest<<endl;
	
	system("pause");
}

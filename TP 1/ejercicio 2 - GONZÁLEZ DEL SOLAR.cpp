/* 
	Laboratorio I 
	TP No 1
	Ejercicio 2: Sucursal de banco
	Autor: Lic. Francisco Javier González del Solar
*/

# include <iostream>
using namespace std;

main(){
	float total;
	int cents_5, cents_10, cents_25, cents_50, cents_100, cents_200;
	string sucursal;
	
//	cout<<"Ingrese el nombre de la sucursal"<<endl; 
//	cin>>sucursal;
//	
//	cout<<"Ingrese cantidad de monedas de 5 centavos"<<endl; 
//	cin>>cents_5; 
//	
//	cout<<"Ingrese cantidad de monedas de 10 centavos"<<endl; 
//	cin>>cents_10; 
//
//	cout<<"Ingrese cantidad de monedas de 25 centavos"<<endl; 
//	cin>>cents_25;
//
//	cout<<"Ingrese cantidad de monedas de 50 centavos"<<endl; 
//	cin>>cents_50; 
//
//	cout<<"Ingrese cantidad de monedas de 1 peso"<<endl; 
//	cin>>cents_100; 
//
//	cout<<"Ingrese cantidad de monedas de 2 pesos"<<endl; 
//	cin>>cents_200; 

	sucursal = "Guaymallén";
	cents_5 = 2357;
	cents_10 = 6108;
	cents_25 = 0;
	cents_50 = 2400;
	cents_100 = 5300;
	cents_200 = 257;
	
	total = (cents_5 * 0.05 +
			 cents_10 * 0.1 +
			 cents_25 * 0.25 +
			 cents_50 * 0.5 +
			 cents_100 * 1 +
			 cents_200 * 2);			 
	
	cout<<"TOTAL DISPONIBLE SUCURSAL "<<sucursal<<" $ "<<total<<endl;
	
	system("pause");
}

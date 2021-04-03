/* 
	Laboratorio I 
	TP No 2
	Ejercicio 1: Inmobiliaria
	Autor: Lic. Francisco Javier González del Solar
*/

# include <iostream>
# include <string.h>
using namespace std;

main ()
{
	bool invest = false;
	int location, house_type, has_garage;
	float price;
	
	cout<<"**********************************"<<endl;
	cout<<"Elija la ubicación de la propiedad "<<endl;
	cout<<"1. Godoy Cruz"<<endl;
	cout<<"2. Ciudad"<<endl;
	cout<<"3. Las Heras"<<endl;
	cout<<"********************"<<endl;	
	cin>>location;
	
	cout<<"Ingrese el precio de la propiedad"<<endl;
	cin>>price;

	cout<<"**********************************"<<endl;
	cout<<"Elija el tipo de propiedad "<<endl;
	cout<<"1. Casa"<<endl;
	cout<<"2. Departamento"<<endl;
	cout<<"********************"<<endl;	
	cin>>house_type;
	
	cout<<"**********************************"<<endl;
	cout<<"La propiedad, ¿tiene cochera? "<<endl;
	cout<<"1. Sí"<<endl;
	cout<<"2. No"<<endl;
	cout<<"********************"<<endl;	
	cin>>has_garage;	
	
	switch (location)
	{
		case 1: // GC
			if (price <= 70000)
				invest = true;
			else
			{
				if (house_type == 1 && has_garage == 1) // casa con garage
					invest = true;
				else
					cout<<"Debería visitar la propiedad y recojer más datos antes de decidir invertir"<<endl;
			}
		break;
		
		case 2: // Ciudad
			if (price > 100000)
				// No hacer nada. La condición está expresada de esta forma para cumplir con la consigna del ejercio, 
				//aunque hubiera tenido más sentido optar por 'price < 100000'
				;
			else
			{
				if (house_type == 1) // es casa
					invest = true;
				else
				{
					if (has_garage == 1) // depto con cochera
						invest = true;
					else
						cout<<"Debería averiguar si existen cocheras en la zona antes de decidir invertir"<<endl;
				}					
			}
			
		break;
		
		case 3: // LH
			if (house_type == 1 && has_garage == 1) // casa con cochera
				invest = true;
		break;
		
		default: "Valor de ubicación inválido";
	}
	
	if (invest == true)
		cout<<"Sería conveniente invertir en la propiedad"<<endl;
	else
		cout<<"No se recomienda invertir en la propiedad en este momento"<<endl;
	
	
	system("pause");
	

}

/* 
	Laboratorio I 
	TP No 2
	Ejercicio 3: Farmacia 
	Autor: Lic. Francisco Javier González del Solar
*/

# include <iostream>
# include <string.h>
using namespace std;

main ()
{
	int discount = 0;
	int insurance;
	char is_cash; 
	
	cout<<"**********************************"<<endl;
	cout<<"Elija el plan de cobertura del paciente "<<endl;
	cout<<"1. Plan A"<<endl;
	cout<<"2. Plan B o Plan C"<<endl;
	cout<<"3. Plan D"<<endl;
	cout<<"4. Otro"<<endl;
	cout<<"********************"<<endl;	
	do {
		cin>>insurance;
	} while (insurance < 1 || insurance > 4);
	
	
	cout<<"**********************************"<<endl;
	cout<<"El paciente, ¿abona en efectivo? "<<endl;
	cout<<"Sí (s)"<<endl;
	cout<<"No (n)"<<endl;
	cout<<"********************"<<endl;	
	do {
		cin>>is_cash;
	} while (is_cash != 's' && is_cash != 'n');
	
	
	switch (insurance)
	{
		case 1: // A
			discount += 100;
		break;

		case 2: // B o C
			discount += 90;
		break;

		case 3: // D
			discount += 50;
		break;	
		
		case 4: // Otro
			discount += 25;
		break;		
	}
		
	if (is_cash == 's')
	{
		if (discount<95){
			discount += 5;
		}
	}
	
	cout<<"El paciente tiene un beneficio del "<<discount<<" de descuento."<<endl;
}

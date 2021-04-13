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
	int order_choice, people_amt, days_amt;
	char reward[30] = ""; 
	
	cout<<"**********************************"<<endl;
	cout<<"Elija el tipo de pedido del cliente "<<endl;
	cout<<"1. Viaje local"<<endl;
	cout<<"2. Viaje interprovincial"<<endl;
	cout<<"3. Viaje internacional"<<endl;
	cout<<"********************"<<endl;	
	do {
		cin>>order_choice;
	} while (order_choice < 1 || order_choice > 3);
	
	
	cout<<"Ingrese la cantidad de personas"<<endl;
	do {
		cin>>people_amt;
	} while (people_amt <= 0);
	
	
	cout<<"Ingrese la cantidad de días viajando"<<endl;
	do {
		cin>>days_amt;
	} while (days_amt <= 0);
	
		
	switch (order_choice)
	{
		case 1: // local
			if (people_amt >= 1 && people_amt <= 2)
				strcpy(reward, "Entradas a un espectáculo");
			else if (people_amt >= 3)
				strcpy(reward, "2 días de estadía extra");
		break;

		case 2: // Interprovincial
			if (people_amt >= 1 && people_amt <= 2)
				if (days_amt < 7)
					strcpy(reward, "1 día de estadía extra");
				else
					strcpy(reward, "Excursiones gratis");
			else if (people_amt >= 3)
				if (days_amt < 7)
					strcpy(reward, "Descuentos a espectáculos");
				else
					strcpy(reward, "Excursiones gratis");
		break;

		case 3: // Internacional
			if (people_amt >= 1 && people_amt <= 2)
				if (days_amt < 7)
					strcpy(reward, "1 juego completo de valijas");
				else
					strcpy(reward, "Excursiones gratis");
			else if (people_amt >= 3)
				if (days_amt < 7)
					strcpy(reward, "1 juego completo de valijas");
				else
					strcpy(reward, "Cupones de descuento");
		break;	
			
	}
	
	cout<<"Muchas gracias por contratar con nuestra agencia!"<<endl;
	
	if (strcmp(reward, "")!=0)
	{
		cout<<"Felicidades! Aquí tienes nuestro regalo"<<endl;
		cout<<reward<<endl;
	}
	
}

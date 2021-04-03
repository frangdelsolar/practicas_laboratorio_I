/* 
	Laboratorio I 
	TP No 1
	Ejercicio 4: Ganancias boliche
	Autor: Lic. Francisco Javier González del Solar
*/

# include <iostream>
using namespace std;

main(){
	int ticket_full_amt, ticket_discount_amt;
	float ticket_full_price, ticket_discount_price;
	float ticket_full_expenses, ticket_discount_expenses;
	float taking, full_total_expenses, disc_total_expenses, income;
	
	cout<<"Ingrese la cantidad de tickets vendidos con descuento: "<<endl;
	cin>>ticket_discount_amt;

	cout<<"Ingrese el precio del ticket con descuento: "<<endl;
	cin>>ticket_discount_price;

	cout<<"Ingrese los gastos del ticket con descuento: "<<endl;
	cin>>ticket_discount_expenses;
	
	cout<<"Ingrese la cantidad de tickets vendidos sin descuento: "<<endl;
	cin>>ticket_full_amt;

	cout<<"Ingrese el precio del ticket sin descuento: "<<endl;
	cin>>ticket_full_price;

	cout<<"Ingrese los gastos del ticket sin descuento: "<<endl;
	cin>>ticket_full_expenses;
	
	taking = (ticket_discount_amt * ticket_discount_price +
			   ticket_full_amt * ticket_full_price);
	disc_total_expenses = ticket_discount_amt * ticket_discount_expenses;
	full_total_expenses = ticket_full_amt * ticket_full_expenses;
	income = taking - disc_total_expenses - full_total_expenses;
	
	cout<<"***************************"<<endl;
	cout<<"*         Informe         *"<<endl;
	cout<<"***************************"<<endl;
	cout<<"Se vendieron "<<ticket_discount_amt<<" entradas con descuento por un valor de $"<<ticket_discount_price<<endl;
	cout<<"Se vendieron "<<ticket_full_amt<<" entradas sin descuento por un valor de $"<<ticket_full_price<<endl;
	cout<<"Recaudación $"<<taking<<endl;
	cout<<"Total gastos de tickets con descuento $"<<disc_total_expenses<<endl;
	cout<<"Total gastos de tickets sin descuento $"<<full_total_expenses<<endl;
	cout<<"Ganancia $"<<income<<endl;
	system("pause");	
}

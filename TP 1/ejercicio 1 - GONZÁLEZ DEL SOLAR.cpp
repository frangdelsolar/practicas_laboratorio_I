/* 
	Laboratorio I 
	TP No 1
	Ejercicio 1: Factura de Hostel
	Autor: Lic. Francisco Javier González del Solar
*/

# include <iostream>
using namespace std;

main(){
	int cantidad_dias;
	float precio_dia, neto, taxes, frigobar, total, IVA;
	
	IVA = 0.21;
	
	// Entrada
	cout<<"Ingrese la cantidad de días: "<<endl;
	cin>>cantidad_dias;
	
	cout<<"Ingrese el precio por día: "<<endl;
	cin>>precio_dia;	
	
	// Proceso
	neto = cantidad_dias * precio_dia;
	taxes = neto * IVA + neto;	
	frigobar = neto / 3;
	total = taxes + frigobar;
	
	// Salida	
	cout<<"***************************"<<endl;
	cout<<"*         Factura         *"<<endl;
	cout<<"***************************"<<endl;
	cout<<"Cantidad de días: "<<cantidad_dias<<endl;
	cout<<"Precio por día: "<<precio_dia<<endl;
	cout<<"Total estadía (sin IVA): "<<neto<<endl;
	cout<<"Total estadía (con IVA): "<<taxes<<endl;
	cout<<"Cargos por frigobar: "<<frigobar<<endl;
	cout<<"Total: "<<total<<endl;
	
	system("pause");	
}

/* 
	Laboratorio I 
	TP No 1
	Ejercicio 1: Factura de Hostel
	Autor: Lic. Francisco Javier Gonz�lez del Solar
*/

# include <iostream>
using namespace std;

main(){
	int cantidad_dias;
	float precio_dia, neto, taxes, frigobar, total, IVA;
	
	IVA = 0.21;
	
	// Entrada
	cout<<"Ingrese la cantidad de d�as: "<<endl;
	cin>>cantidad_dias;
	
	cout<<"Ingrese el precio por d�a: "<<endl;
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
	cout<<"Cantidad de d�as: "<<cantidad_dias<<endl;
	cout<<"Precio por d�a: "<<precio_dia<<endl;
	cout<<"Total estad�a (sin IVA): "<<neto<<endl;
	cout<<"Total estad�a (con IVA): "<<taxes<<endl;
	cout<<"Cargos por frigobar: "<<frigobar<<endl;
	cout<<"Total: "<<total<<endl;
	
	system("pause");	
}

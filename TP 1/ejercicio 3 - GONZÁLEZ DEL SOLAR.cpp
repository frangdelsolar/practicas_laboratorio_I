/* 
	Laboratorio I 
	TP No 1
	Ejercicio 3: Empresa de transporte
	Autor: Lic. Francisco Javier González del Solar
*/

# include <iostream>
using namespace std;

main(){
	
	int km_recorridos, bultos;
	float honorarios, IVA, CANON_BULTO, CANON_KM;
	
	IVA = 1.21;
	CANON_KM = 20;
	CANON_BULTO = 40;	
	
	cout<<"Ingrese la cantidad de kilómetros recorridos"<<endl; 
	cin>>km_recorridos;

	cout<<"Ingrese la cantidad de bultos transportados"<<endl; 
	cin>>bultos;
	
	honorarios = (km_recorridos * CANON_KM + bultos * CANON_BULTO) * IVA;
	
	cout<<"Total a abonar por el cliente (IVA inc.): $ "<<honorarios<<endl;
	
	system("pause");
}


/* 
	Laboratorio I 
	TP No 1
	Ejercicio 8: Multa
	Autor: Lic. Francisco Javier González del Solar
*/

# include <iostream>
using namespace std;

main(){
	
	float fine_value, surcharge, fee, total;
	int installments, fine_year, current_year, ADITIONAL_OLD;
	
	ADITIONAL_OLD = 45;
	
	cout<<"Ingrese el total de la multa: "<<endl;
	cin>>fine_value;

	cout<<"Ingrese cantidad de cuotas: "<<endl;
	cin>>installments;
	
	cout<<"Ingrese el recargo total: "<<endl;
	cin>>surcharge;

	cout<<"Ingrese el año en que se emitió la multa: "<<endl;
	cin>>fine_year;
	
	cout<<"Ingrese el año corriente: "<<endl;
	cin>>current_year;
	
	
	fee = (fine_value + surcharge) / installments;
	
	if (current_year > fine_year){
		fee += ADITIONAL_OLD;
		cout<<"El sujeto deberá abonar un recargo de $"<<ADITIONAL_OLD<<" ya que su multa es del año anterior."<<endl;
	}
	
	total = fee * installments;
	
	cout<<"El valor de la cuota es de $"<<fee<<" por un valor total de $"<<total<<" que será abonado en "<<installments<<" cuota/s."<<endl;
	
	system("pause");
}

/* 
	Laboratorio I 
	TP No 1
	Ejercicio 6: Calcular sueldo
	Autor: Lic. Francisco Javier Gonz�lez del Solar
*/

# include <iostream>
using namespace std;

main(){
	char name[30];
	float daily_pay, salary;
	int unattendance, laborable;
	
	cout<<"Ingrese el nombre del empleado: "<<endl;
	cin>>name;

	cout<<"Ingrese la paga diaria: "<<endl;
	cin>>daily_pay;
	
	cout<<"Ingrese la cantidad de inasistencias: "<<endl;
	cin>>unattendance;
	
	cout<<"Ingrese la cantidad de d�as laborables: "<<endl;
	cin>>laborable;
	
	
	if (unattendance > laborable)
	{
		cout<<"Las inasistencias no pueden ser mayores a los d�as laborables!!! Reinicie el programa. "<<endl;
	}
	else
	{
		salary = (laborable - unattendance) * daily_pay;
		cout<<"El sueldo del empleado "<<name<<" es de $"<<salary<<endl;
	}
	
	
	system("pause");
}

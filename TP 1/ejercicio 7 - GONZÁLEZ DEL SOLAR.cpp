/* 
	Laboratorio I 
	TP No 1
	Ejercicio 7: Obra Social
	Autor: Lic. Francisco Javier Gonz�lez del Solar
*/

# include <iostream>
using namespace std;

main(){
	
	int age;
	string category;
	
	cout<<"Ingrese la edad del afiliado: "<<endl;
	cin>>age;
	
	if (age < 1){
		category = "Reci�n nacido";
	} else if (age <= 5){
		category = "Infante";
	} else if (age <= 12){
		category = "Ni�o";
	} else if (age <= 18){
		category = "Pre-adolescente";
	} else if (age <= 25){
		category = "Adolescente";
	} else if (age <= 35){
		category = "Adulto joven";
	} else if (age <= 50){
		category = "Adulto";
	} else {
		category = "Adulto mayor";
	}

	cout<<"La categor�a del afiliado es "<<category<<endl;
	
	system("pause");
}

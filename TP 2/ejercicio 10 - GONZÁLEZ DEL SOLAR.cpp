/* 
	Laboratorio I 
	TP No 2
	Ejercicio 10: Adivinanza
	Autor: Lic. Francisco Javier González del Solar
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


int main() {
	srand(time(NULL));
	
	int adivinar = 1000+rand()%(10000-1000); // Este es el número que el usuario debe adivinar
	int a_unim, a_res, a_cen, a_dec, a_uni;
	
	int intento;
	int i_unim, i_res, i_cen, i_dec, i_uni;
	
	int malo, bueno, regular;	
	
	// Descomponer la variable adivinar y almacenar cada cifra en variables separadas
	a_unim = adivinar / 1000; // Unidades de mil
	a_res = adivinar / 100; // variable auxiliar
	a_cen = a_res % 10; // Centenas
	a_res = adivinar / 10; // variable auxiliar
	a_dec = a_res % 10; // Decenas
	a_uni = adivinar % 10; // Unidades
	
//	cout<<a_unim<<endl;
//	cout<<a_cen<<endl;
//	cout<<a_dec<<endl;
//	cout<<a_uni<<endl;

	cout<<"*************************************************"<<endl;	
	cout<<"*  Vamos a adivinar un número entre 1000 y 9999 *"<<endl;
	cout<<"*************************************************"<<endl;

	do{
		
		do{
			cout<<"Ingrese un número de 4 cifras "<<endl;
			cin>>intento;
		} while(intento>9999 || intento<1000);

		// Descomponer la variable intento y almacenar cada cifra en variables separadas
		i_unim = intento / 1000; // Unidades de mil
		i_res = intento / 100;
		i_cen = i_res % 10; // Centenas
		i_res = intento / 10;
		i_dec = i_res % 10; // Decenas
		i_uni = intento % 10; // Unidades
		
	//	cout<<i_unim<<endl;
	//	cout<<i_cen<<endl;
	//	cout<<i_dec<<endl;
	//	cout<<i_uni<<endl;
		
		malo = 4;
		regular = 0;
		bueno = 0;
	
		if (i_unim == a_unim)
		{
			bueno++;
			malo--;
		}
		else
		{
			if(i_unim == a_cen || i_unim == a_dec || i_unim == a_uni)
			{			
				regular++;
				malo--;
			}
		}
		
		if (i_cen == a_cen)
		{
			bueno++;
			malo--;
		}
		else
		{
			if(i_cen == a_unim || i_cen == a_dec || i_cen == a_uni)
			{
				regular++;
				malo--;
			}
		}
			
		if (i_dec == a_dec)
		{
			bueno++;
			malo--;
		}
		else
		{
			if(i_dec == a_unim || i_dec == a_cen || i_dec == a_uni)
			{			
				regular++;
				malo--;	
			}
		}
	
		
		if (i_uni == a_uni)
		{
			bueno++;
			malo--;
		}
		else
		{
			if(i_uni == a_unim || i_uni == a_cen || i_uni == a_dec)
			{
				regular++;
				malo--;	
			}	
		}
				
		cout<<"----------------------"<<endl;
		cout<<"Su intento: "<<intento<<endl;
//		cout<<"Respuesta: "<<adivinar<<endl;
		cout<<"Malos: "<<malo<<endl;
		cout<<"Regulares: "<<regular<<endl;
		cout<<"Buenos: "<<bueno<<endl;
		cout<<"----------------------"<<endl;
	} while(bueno!=4);
	
	cout<<"Este es el número ganador: "<<adivinar<<endl;
	cout<<"Felicidades!!!!"<<endl;	
}       

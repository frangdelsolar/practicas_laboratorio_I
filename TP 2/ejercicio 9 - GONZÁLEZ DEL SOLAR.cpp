/* 
	Laboratorio I 
	TP No 2
	Ejercicio 9: Máquina Expendedora
	Autor: Lic. Francisco Javier González del Solar
*/

#include<iostream>
using namespace std;


int main() {
	int fantaAmt, spriteAmt, cokeAmt, zeroAmt;
	float PRICE;
	int coin1, coin50;
	int drinkChoice, coinChoice;
	float cashIn = 0.0;
	float cashOut = 0.0;

	PRICE = 3.50;
	
	fantaAmt = 3;
	spriteAmt = 5;
	cokeAmt = 10;
	zeroAmt = 5;
	
	coin1 = 10;
	coin50 = 10;
	
	do {
		
		// SELECCIONAR BEBIDA
		do {
			
			cout<<"Elija su bebida"<<endl;
			cout<<"1. Fanta"<<endl;
			cout<<"2. Sprite"<<endl;
			cout<<"3. Coca Cola"<<endl;
			cout<<"4. Coca Cola Zero"<<endl;
			cin>>drinkChoice;
			
			switch (drinkChoice)
			{
				case 1:
					if (fantaAmt<=0)
					{
						cout<<"No queda más Fanta...";
						drinkChoice = 5;
					}
						
					break;
				case 2:
					if (spriteAmt<=0)
					{
						cout<<"No queda más Sprite...";
						drinkChoice = 5;
					}
					break;		
				case 3:
					if (cokeAmt<=0)
					{
						cout<<"No queda más Coca Cola...";
						drinkChoice = 5;
					}
					break;	
				case 4:
					if (zeroAmt<=0)
					{
						cout<<"No queda más Coca Cola Zero...";
						drinkChoice = 5;
					}
					break;	
				default:
					cout<<"Opción incorrecta"<<endl;
					break;	
			}
			
		} while (drinkChoice<=1 && drinkChoice>=4);
		
	
		// INGRESAR PAGO		
		do {
			cout<<"TOTAL INGRESADO: $"<<cashIn<<endl;
			cout<<"Ingrese monedas para realizar el pago"<<endl;
			cout<<"1. Moneda de $1"<<endl;
			cout<<"2. Moneda de $0.50"<<endl;
			cin>>coinChoice;
			
			switch (coinChoice)
			{
				case 1:
					cashIn += 1.0;
					coin1++;
					break;
				case 2:
					cashIn += 0.5;
					coin50++;
					break;
				default:
					cout<<"Opción incorrecta";
					break;
			}
		} while (cashIn<PRICE);
			
		// DAR VUELTO
		if (cashIn>PRICE)
		{
			cashOut = cashIn - PRICE;
			cout<<"Su vuelto: "<<cashOut<<endl;			
		}
		
		// ENTREGAR LA BEBIDA Y ACTUALIZAR STOCK
		switch (drinkChoice)
			{
				case 1:
					fantaAmt--;
					cout<<"Retire su Fanta...";					
					break;
					
				case 2:
					spriteAmt--;
					cout<<"Retire su Sprite...";					
					break;
		
				case 3:
					cokeAmt--;
					cout<<"Retire su Coca Cola...";					
					break;	
				case 4:
					zeroAmt--;
					cout<<"Retire su Coca Cola Zero...";					
					break;	
			}
		
		
		
	} while (fantaAmt>0 || spriteAmt>0 || cokeAmt>0 || zeroAmt>0);
	
	cout<<"Lamentablemente, no quedan más bebidas en la máquina."<<endl;
	system("pause");
	
}

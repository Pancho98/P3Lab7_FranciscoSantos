#include <iostream>
#include <ios>
#include<fstream>
#include<vector>
#include "Racional.h"
using namespace std;
int main(){
	ofstream log1("log.txt",ios::app);
	vector<Racional*> Fracciones;
	int opc=1;
	int frac1,frac2;
	int numerador, denominador;
	while (opc!=6) {
		cout << "----------MENU----------" << '\n';
		cout << "1. Suma de Racionales" << '\n';
		cout << "2. Resta de Racionales" << '\n';
		cout << "3. Multiplicacion de Racionales" << '\n';
		cout << "4. Division de Racionales" << '\n';
		cout << "5. Crear Fraccion" << '\n';
		cout << "6. Salir" << '\n';
		cin >> opc;

		switch (opc) {
			case 1:{
				if(Fracciones.size()>1){
					for (int i = 0; i < Fracciones.size(); i++) {
						cout << i << "." <<Fracciones[i]->getNumerador()<< "/" << Fracciones[i]->getDenominador() << '\n';
					}
					cout << "Ingrese numero de fraccion" << '\n';
					cin>>frac1;
					cout << "Ingrese otro numero de fraccion" << '\n';
					cin>>frac2;

					int sumar;
					cout << "1. Asignar y Sumar Racionalel" << '\n';
					cout << "2. Sumar Racionales" << '\n';
					cin>>sumar;
					if (sumar==1) {
						*Fracciones[frac1]+=*Fracciones[frac2];
						cout << "La asignacion es: " << Fracciones[frac1]->getNumerador() << "/" << Fracciones[frac1]->getDenominador() <<'\n';
					}else if(sumar==2){
						Racional racional=(*Fracciones[frac1])+ (*Fracciones[frac2]);
						cout << "La suma entre los Racionales es: " << racional.getNumerador()<< "/" << racional.getDenominador() << '\n';
						log1<<Fracciones[frac1]->getNumerador()<<"/"<<Fracciones[frac1]->getDenominador()<<" + "<<Fracciones[frac2]->getNumerador()<<"/"<<Fracciones[frac2]->getDenominador()<<" = "<<racional.getNumerador()<< "/" << racional.getDenominador() << '\n';
					}else{
						cout << "No existe esa opcion" << '\n';
					}
				}
			}
			break;

			case 2:{

				for (int i = 0; i < Fracciones.size(); i++) {
					cout << i << "." <<Fracciones[i]->getNumerador()<< "/" << Fracciones[i]->getDenominador() << '\n';
				}
				cout << "Ingrese numero de fraccion" << '\n';
				cin>>frac1;
				cout << "Ingrese otro numero de fraccion" << '\n';
				cin>>frac2;

				int restar;
				cout << "1. Asignar y Restar Racionalel" << '\n';
				cout << "2. Restar Racionales" << '\n';
				cin>>restar;
				if (restar==1) {
					*Fracciones[frac1]-=*Fracciones[frac2];
					cout << "La asignacion es: " << Fracciones[frac1]->getNumerador() << "/" << Fracciones[frac1]->getDenominador() <<'\n';
				}else if(restar==2){
					Racional racional=(*Fracciones[frac1])- (*Fracciones[frac2]);
					cout << "La resta entre los Racionales es: " << racional.getNumerador()<< "/" << racional.getDenominador() << '\n';
					log1<<Fracciones[frac1]->getNumerador()<<"/"<<Fracciones[frac1]->getDenominador()<<" - "<<Fracciones[frac2]->getNumerador()<<"/"<<Fracciones[frac2]->getDenominador()<<" = "<<racional.getNumerador()<< "/" << racional.getDenominador() << '\n';
				}
			}
			break;

			case 3:
			{

				for (int i = 0; i < Fracciones.size(); i++) {
					cout << i << "." <<Fracciones[i]->getNumerador()<< "/" << Fracciones[i]->getDenominador() << '\n';
				}
				cout << "Ingrese numero de fraccion" << '\n';
				cin>>frac1;
				cout << "Ingrese otro numero de fraccion" << '\n';
				cin>>frac2;

				int multi;
				cout << "1. Asignar y Multiplicar Racionalel" << '\n';
				cout << "2. Multiplicar Racionales" << '\n';
				cin>>multi;
				if (multi==1) {
					*Fracciones[frac1]*=*Fracciones[frac2];
					cout << "La asignacion es: " << Fracciones[frac1]->getNumerador() << "/" << Fracciones[frac1]->getDenominador() <<'\n';
				}else if(multi==2){
					Racional racional=(*Fracciones[frac1])* (*Fracciones[frac2]);
					cout << "La multiplicacion entre los Racionales es: " << racional.getNumerador()<< "/" << racional.getDenominador() << '\n';
					log1<<Fracciones[frac1]->getNumerador()<<"/"<<Fracciones[frac1]->getDenominador()<<" * "<<Fracciones[frac2]->getNumerador()<<"/"<<Fracciones[frac2]->getDenominador()<<" = "<<racional.getNumerador()<< "/" << racional.getDenominador() << '\n';
				}
			}
			break;
			case 4:{

				for (int i = 0; i < Fracciones.size(); i++) {
					cout << i << "." <<Fracciones[i]->getNumerador()<< "/" << Fracciones[i]->getDenominador() << '\n';
				}
				cout << "Ingrese numero de fraccion" << '\n';
				cin>>frac1;
				cout << "Ingrese otro numero de fraccion" << '\n';
				cin>>frac2;

				int divi;
				cout << "1. Asignar y Dividir Racionalel" << '\n';
				cout << "2. Dividir Racionales" << '\n';
				cin>>divi;
				if (divi==1) {
					*Fracciones[frac1]/=*Fracciones[frac2];
					cout << "La asignacion es: " << Fracciones[frac1]->getNumerador() << "/" << Fracciones[frac1]->getDenominador() <<'\n';
				}else if(divi==2){
					Racional racional=(*Fracciones[frac1])/ (*Fracciones[frac2]);
					cout << "La division entre los Racionales es: " << racional.getNumerador()<< "/" << racional.getDenominador() << '\n';
					log1<<Fracciones[frac1]->getNumerador()<<"/"<<Fracciones[frac1]->getDenominador()<<" / "<<Fracciones[frac2]->getNumerador()<<"/"<<Fracciones[frac2]->getDenominador()<<" = "<<racional.getNumerador()<< "/" << racional.getDenominador() << '\n';
				}
		  }
			break;
			case 5:
			{
				cout << "Ingrese Numerador" << '\n';
				cin>>numerador;
				cout << "Ingrese Denominador" << '\n';
				cin>>denominador;
				while(denominador==0){
					cout << "Denominador tiene que ser distinto de cero" << '\n';
					cout << "Ingrese Denominador nuevamente" << '\n';
					cin>>denominador;
				}
				Racional* racional=new Racional(numerador, denominador);
				Fracciones.push_back(racional);

			}
			break;
			case 6:
			{

			}
			break;
		}
	}


	return 0;
}

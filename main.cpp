//#include "adminRacionales.h"
#include "Racional.h"
#include <iostream>
#include <vector>
using namespace std;

int menu();
int sumaMenu();
int restaMenu();
int multiMenu();
int divMenu();
void sumar(vector<Racional>&);
void restar(vector<Racional>&);
void multiplicar(vector<Racional>&);
void dividir(vector<Racional>&);

Racional crearRacional();
void listarRacionales(vector<Racional>&);

int main(){
	//string s = "Log.txt";
	//adminRacionales* ar = new adminRacionales(s);
	/*int num;
	int den;
	cin>>num;
	cin>>den;
	Racional* r1 = new Racional(num, den);
	cin>>num;
	cin>>den;
	Racional* r2 = new Racional(num, den);
	Racional r3 = *r1 / *r2;
	cout<<r3.getNumerador()<<endl;
	cout<<"-"<<endl;
	cout<<r3.getDenominador()<<endl;
	//ar->updateLog(r1->getNumerador(), r1->getDenominador, r2->getNumerador(), r2->getDenominador(), "-");
	*r1-=*r2;
	cout<<r1->getNumerador()<<endl;
	cout<<"-"<<endl;
	cout<<r1->getDenominador()<<endl;
	*/
	bool seguir = true;
	vector<Racional> racionales;
	while(seguir){
		switch(menu()){
			case 1:
				sumar(racionales);
				break;
			case 2:
				restar(racionales);
				break;
			case 3:
				multiplicar(racionales);
				break;
			case 4:
				dividir(racionales);
				break;
			case 5:
				racionales.push_back(crearRacional());	
				break;
			case 6:
				seguir = false;
				break;
		}
	}
}

void listarRacionales(vector<Racional>& racionales){
	for (int i=0; i < racionales.size(); i++){
		cout<<i<<") "<<racionales.at(i).getNumerador()<<"/"<<racionales.at(i).getDenominador()<<endl;
	}
}

Racional crearRacional(){
	cout<<"Ingrese el numerador:";
	int num;
	cin >> num;
	cout<<"Ingrese el denominador:";
	int den;
	cin >> den;
	Racional rac(num, den);
	return rac;
}

void sumar(vector<Racional>& racionales){
	bool seguir = true;
	Racional rac1, rac2, rac3;
	int pos =0;
	while(seguir){
		switch(sumaMenu()){
			case 1:
				cout<<"Escoja el racional A:"<<endl;
				listarRacionales(racionales);
				pos=0;
				cin>>pos;
				rac1 = racionales.at(pos);
				cout<<"Escoja el racional B:"<<endl;
				cin>>pos;	
				rac2 = racionales.at(pos);
				rac3 = rac1 + rac2;
				cout<<"Suma: "<<rac3.getNumerador()<<"/"<<rac3.getDenominador()<<endl;	
				break;
			case 2:
				cout<<"Escoja el racional A:"<<endl;
				listarRacionales(racionales);
				pos=0;
				cin>>pos;
				rac1 = racionales.at(pos);
				cout<<"Escoja el racional B:"<<endl;
				cin>>pos;
				rac2 = racionales.at(pos);
				rac1 += rac2;
				cout<<"Suma: "<<rac1.getNumerador()<<"/"<<rac1.getDenominador()<<endl;
				break;
			case 3:
				seguir = false;
				break;
		}
	}
}

void restar(vector<Racional>& racionales){
	bool seguir = true;
	Racional rac1, rac2, rac3;
	int pos =0;
	while(seguir){
		switch(restaMenu()){
			case 1:
				cout<<"Escoja el racional A:"<<endl;
				listarRacionales(racionales);
				pos=0;
				cin>>pos;
				rac1 = racionales.at(pos);
				cout<<"Escoja el racional B:"<<endl;
				cin>>pos;	
				rac2 = racionales.at(pos);
				rac3 = rac1 - rac2;
				cout<<"Suma: "<<rac3.getNumerador()<<"/"<<rac3.getDenominador()<<endl;	
				break;
			case 2:
				cout<<"Escoja el racional A:"<<endl;
				listarRacionales(racionales);
				pos=0;
				cin>>pos;
				rac1 = racionales.at(pos);
				cout<<"Escoja el racional B:"<<endl;
				cin>>pos;
				rac2 = racionales.at(pos);
				rac1 -= rac2;
				cout<<"Suma: "<<rac1.getNumerador()<<"/"<<rac1.getDenominador()<<endl;
				break;
			case 3:
				seguir = false;
				break;
		}
	}
}

void multiplicar(vector<Racional>& racionales){
	bool seguir = true;
	Racional rac1, rac2, rac3;
	int pos =0;
	while(seguir){
		switch(multiMenu()){
			case 1:
				cout<<"Escoja el racional A:"<<endl;
				listarRacionales(racionales);
				pos=0;
				cin>>pos;
				rac1 = racionales.at(pos);
				cout<<"Escoja el racional B:"<<endl;
				cin>>pos;
				rac2 = racionales.at(pos);
				rac3 = rac1 * rac2;
				cout<<"Suma: "<<rac3.getNumerador()<<"/"<<rac3.getDenominador()<<endl;
				break;
			case 2:
				cout<<"Escoja el racional A:"<<endl;
				listarRacionales(racionales);
				pos=0;
				cin>>pos;
				rac1 = racionales.at(pos);
				cout<<"Escoja el racional B:"<<endl;
				cin>>pos;
				rac2 = racionales.at(pos);
				rac1 *= rac2;
				cout<<"Suma: "<<rac1.getNumerador()<<"/"<<rac1.getDenominador()<<endl;
				break;
			case 3:
				seguir = false;
				break;
		}
	}
}

void dividir(vector<Racional>& racionales){
	bool seguir = true;
	Racional rac1, rac2, rac3;
	int pos =0;
	while(seguir){
		switch(divMenu()){
			case 1:
				cout<<"Escoja el racional A:"<<endl;
				listarRacionales(racionales);
				pos=0;
				cin>>pos;
				rac1 = racionales.at(pos);
				cout<<"Escoja el racional B:"<<endl;
				cin>>pos;
				rac2 = racionales.at(pos);
				rac3 = rac1 / rac2;
				cout<<"Suma: "<<rac3.getNumerador()<<"/"<<rac3.getDenominador()<<endl;
				break;
			case 2:
				cout<<"Escoja el racional A:"<<endl;
				listarRacionales(racionales);
				pos=0;
				cin>>pos;
				rac1 = racionales.at(pos);
				cout<<"Escoja el racional B:"<<endl;
				cin>>pos;
				rac2 = racionales.at(pos);
				rac1 /= rac2;
				cout<<"Suma: "<<rac1.getNumerador()<<"/"<<rac1.getDenominador()<<endl;
				break;
			case 3:
				seguir = false;
				break;
		}
	}
}


int sumaMenu(){
	cout<<"Suma:"<<endl
	    <<"1) A + B = C"<<endl
	    <<"2) A += B"<<endl
	    <<"3)Salir"<<endl;
	int opcion;
	cin>>opcion;
	return opcion;
}

int restaMenu(){
	cout<<"Resta:"<<endl
	    <<"1) A - B = C"<<endl
	    <<"2) A -= B"<<endl
	    <<"3)Salir"<<endl;
	int opcion;
	cin>>opcion;
	return opcion;
}

int multiMenu(){
	cout<<"Multiplicacion:"<<endl
	    <<"1) A * B = C"<<endl
	    <<"2) A *= B"<<endl
	    <<"3)Salir"<<endl;
	int opcion;
	cin>>opcion;
	return opcion;
}

int divMenu(){
	cout<<"Division:"<<endl
	    <<"1) A / B = C"<<endl
	    <<"2) A /= B"<<endl
	    <<"3)Salir"<<endl;
	int opcion;
	cin>>opcion;
	return opcion;
}

int menu(){
	cout<<"Menu:"<<endl
	    <<"1)Sumar"<<endl
	    <<"2)Restar"<<endl
	    <<"3)Multiplicar"<<endl
	    <<"4)Dividir"<<endl
	    <<"5)Agregar Racionales"<<endl
	    <<"6)Salir"<<endl;
	int opcion;
	cin>>opcion;
	return opcion;
}

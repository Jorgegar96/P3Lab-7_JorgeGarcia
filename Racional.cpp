#include "Racional.h"
#include <cmath>
//#include "adminRacionales.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

Racional:: Racional(){
		
}

Racional:: Racional(int numerador, int denominador){
	this->numerador = numerador;
	this->denominador = denominador;
	simplificarFraccion();
}

const Racional Racional:: operator+(const Racional& racional_b)const{
	Racional racional( (numerador*racional_b.getDenominador())+(denominador*racional_b.getNumerador()),
		            denominador*racional_b.getDenominador());
	updatelog(racional_b.getNumerador(), racional_b.getDenominador(), " + ", racional.getDenominador(), racional.getNumerador(), 0, 0);
	/*adminRacionales* ar = new adminRacionales("log.txt");
	
	 ar->updateLog(numerador, denominador, racional_b.getNumerador(), racional_b.getDenominador(), "-");
	 */
	return racional;
}

const Racional Racional:: operator-(const Racional& racional_b)const{
	Racional racional( (numerador*racional_b.getDenominador())-(denominador*racional_b.getNumerador()),
		       	    denominador*racional_b.getDenominador());
	updatelog(racional_b.getNumerador(), racional_b.getDenominador(), " - ", racional.getDenominador(), racional.getNumerador(), 0, 0);
	return racional;
}

const Racional Racional:: operator*(const Racional& racional_b)const{
	Racional racional( numerador*racional_b.getNumerador(), denominador*racional_b.getDenominador());
	updatelog(racional_b.getNumerador(), racional_b.getDenominador(), " * ", racional.getDenominador(), racional.getNumerador(), 0, 0);
	return racional;
}

const Racional Racional:: operator/(const Racional& racional_b)const{
	Racional racional( numerador*racional_b.getDenominador(), denominador*racional_b.getNumerador());
	updatelog(racional_b.getNumerador(), racional_b.getDenominador(), " / ", racional.getDenominador(), racional.getNumerador(), 0, 0);
	return racional;
}

const Racional Racional:: operator+=(const Racional& racional_b){
	int nuevo_num = numerador*racional_b.getDenominador() + denominador*racional_b.getNumerador();
	int nuevo_den = denominador*racional_b.getDenominador();
	int num_save = numerador;
	int den_save = denominador;
	numerador = nuevo_num;
	denominador = nuevo_den;
	simplificarFraccion();
	updatelog(racional_b.getNumerador(), racional_b.getDenominador(), " += ", numerador, denominador, num_save, den_save);
	/*adminRacionales* ar = new adminRacionales("log.txt");
	ar->updateLog(numerador, denominador, racional_b.getNumerador(), racional_b.getDenominador(), "-");
	*/
}

const Racional Racional:: operator-=(const Racional& racional_b){
	int nuevo_num = numerador*racional_b.getDenominador() - denominador*racional_b.getNumerador();
	int nuevo_den = denominador*racional_b.getDenominador();
	int num_save = numerador;
	int den_save = denominador;
	numerador = nuevo_num;
	denominador = nuevo_den;
	simplificarFraccion();
	updatelog(racional_b.getNumerador(), racional_b.getDenominador(), " -= ", numerador, denominador, num_save, den_save);
}

const Racional Racional:: operator/=(const Racional& racional_b){
	int nuevo_num = numerador*racional_b.getDenominador();
	int nuevo_den = denominador*racional_b.getNumerador();
	int num_save = numerador;
	int den_save = denominador;
	numerador = nuevo_num;
	denominador = nuevo_den;
	simplificarFraccion();
	updatelog(racional_b.getNumerador(), racional_b.getDenominador(), " /= ", numerador, denominador, num_save, den_save);
}

const Racional Racional:: operator*=(const Racional& racional_b){
	int nuevo_num = numerador*racional_b.getNumerador();
	int nuevo_den = denominador*racional_b.getDenominador();
	int num_save = numerador;
	int den_save = denominador;
	numerador = nuevo_num;
	denominador = nuevo_den;
	simplificarFraccion();
	updatelog(racional_b.getNumerador(), racional_b.getDenominador(), " *= ", numerador, denominador, num_save, den_save);
}

void Racional:: simplificarFraccion(){
	int menor = 1;
	if(numerador < denominador){
		menor = abs(numerador);
	}else{
		menor = abs(denominador);
	}
	if (menor != 0){
		while ( (denominador % menor != 0 || numerador % menor != 0) && menor > 1){
			menor--;
		}
		numerador/=menor;
		denominador/=menor;
	}
	
}

int Racional:: getNumerador()const{
	return numerador;
}

int Racional:: getDenominador()const{
	return denominador;
}

void Racional:: updatelog(int numerador_2, int denominador_2, string operador, int denominador_3, int numerador_3, int num_save,
		int den_save)const{
	ofstream file("Log.txt", ios::app);
	if(file.is_open()){
		if(num_save == 0 && den_save == 0){
			file<<numerador<<"/"<<denominador<<" "<<operador<<" "<<numerador_2<<"/"<<denominador_2<<" = "<<numerador_3<<"/"
				<<denominador_3<<" ;"<<endl;
		}else{
			file<<num_save<<"/"<<den_save<<" "<<operador<<" "<<numerador_2<<"/"<<denominador_2<<" = "<<numerador_3<<"/"
				<<denominador_3<<" ;"<<endl;	
		}			

	}
	file.close();
}

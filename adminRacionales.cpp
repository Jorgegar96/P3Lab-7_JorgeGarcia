#include "adminRacionales.h"
#include <fstream>
#include <iostream>

adminRacionales(string dir){
	direction = dir;
}

void adminRacionales:: updateLog(int numerador_1, int denominador_1, int numerador_2, int denominador_2, string operador){
	ofstream file(dir,ios::app);
	if (file.is_open()){
		file<<numerador_1<<"/"<<denominador_1<<" "<<operador<<" "<<numerador_2<<"/"<<denominador_2;		
	}	
	file.close();
}

#ifndef RACIONAL_H
#define RACIONAL_H
#include <string>

using namespace std;

class Racional{

	private:
		int numerador;
		int denominador;

	public:
		Racional();
		Racional(int, int);
		const Racional operator+(const Racional&)const;
		const Racional operator-(const Racional&)const;
		const Racional operator/(const Racional&)const;
		const Racional operator*(const Racional&)const;
		const Racional operator+=(const Racional&);
		const Racional operator-=(const Racional&);
		const Racional operator/=(const Racional&);
		const Racional operator*=(const Racional&);
		void simplificarFraccion();
		int getNumerador()const;
		int getDenominador()const;
		void updatelog(int, int, string, int, int, int, int)const;

};

#endif

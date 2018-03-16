#ifndef ADMINRACIONALES_H
#define ADMINRACIONALES_H

#include <fstream>
#include <iostream>

using namespace std;

class adminRacionales{

	private:
		string direction;

	public:
		adminRacionales(string);
		void updateLog(int, int, int, int, string);
	
};

#endif

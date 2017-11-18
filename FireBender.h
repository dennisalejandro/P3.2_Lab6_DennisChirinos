#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;
class FireBender : public Persona{
	private: 
		int Cicatrices;
		int Victorias;
	public: 
		FireBender(int, int, string, string, int, string, Poder*);
		void  setCicatrices(int);
		void  setVictorias(int);
		int getCicatrices();
		int getVictorias();
		string toString();
};

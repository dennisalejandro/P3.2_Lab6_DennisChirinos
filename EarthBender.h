#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;
class EarthBender : public Persona{
	private: 
		int Coles;
		int Graduacion;
	public: 
		EarthBender(int, int, string, string, int, string, Poder*);
		void  setColes(int);
		void  setGraduacion(int);
		int getColes();
		int getGraduacion();
		string toString();
};

#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;
class WaterBender : public Persona {
	private: 
		string Tribu;
		string Arma;
	public: 
		WaterBender(string, string, string, string, int, string, Poder*);
		void  setTribu(string);
		void  setArma(string);
		string getTribu();
		string getArma();
		string toString();
};

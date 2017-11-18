#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;
class AirBender : public Persona {
	private: 
		int Pelo;
		string Color;
	public: 
		AirBender(int, string, string, string, int, string, Poder*);
		void  setPelo(int);
		void  setColor(string);
		int getPelo();
		string getColor();
		string toString();
};

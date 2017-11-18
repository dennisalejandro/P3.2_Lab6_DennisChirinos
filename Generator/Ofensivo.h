#pragma once
#include <iostream>
#include <string>
using namespace std;
class Ofensivo {
	private: 
		int Rango;
		int Fuerza;
	public: 
		Ofensivo(int, int);
		void  setRango(int);
		void  setFuerza(int);
		int getRango();
		int getFuerza();
};

#pragma once
#include <iostream>
#include <string>
using namespace std;
class NonBender {
	private: 
		int Trabajo;
		int Fuerza;
		int Velocidad;
	public: 
		NonBender(int, int, int);
		void  setTrabajo(int);
		void  setFuerza(int);
		void  setVelocidad(int);
		int getTrabajo();
		int getFuerza();
		int getVelocidad();
};

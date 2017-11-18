#pragma once
#include <iostream>
#include <string>
using namespace std;
class Defensivo {
	private: 
		int Resistencia;
		int Duracion;
	public: 
		Defensivo(int, int);
		void  setResistencia(int);
		void  setDuracion(int);
		int getResistencia();
		int getDuracion();
};

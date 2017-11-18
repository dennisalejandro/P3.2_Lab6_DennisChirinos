#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
#include "Poder.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curacion.h"
#include "Mascota.h"
using namespace std;
class NonBender : public Persona {
	private: 
		int Trabajo;
		int Fuerza;
		int Velocidad;
	public: 
		NonBender(int, int, int, string, string, int, string, Poder*);
		void  setTrabajo(int);
		void  setFuerza(int);
		void  setVelocidad(int);
		int getTrabajo();
		int getFuerza();
		int getVelocidad();
		string toString();
};

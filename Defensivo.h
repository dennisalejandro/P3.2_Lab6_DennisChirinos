#pragma once
#include <iostream>
#include <string>
#include "Poder.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curacion.h"
#include "Mascota.h"
using namespace std;
class Defensivo : public Poder {
	private: 
		int Resistencia;
		int Duracion;
	public: 
		Defensivo(int, int);
		void  setResistencia(int);
		void  setDuracion(int);
		int getResistencia();
		int getDuracion();
		string toString();
};

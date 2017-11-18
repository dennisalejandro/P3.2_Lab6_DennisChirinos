#pragma once
#include <iostream>
#include <string>
#include "Poder.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curacion.h"
#include "Mascota.h"
using namespace std;
class Ofensivo : public Poder {
	private: 
		int Rango;
		int Fuerza;
	public: 
		Ofensivo(int, int);
		void  setRango(int);
		void  setFuerza(int);
		int getRango();
		int getFuerza();
		string toString();
};

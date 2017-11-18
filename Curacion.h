#pragma once
#include <iostream>
#include <string>
#include "Poder.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curacion.h"
#include "Mascota.h"
using namespace std;
class Curacion : public Poder {
	private: 
		string Herida;
	public: 
		Curacion(string);
		void  setHerida(string);
		string getHerida();
		string toString();
};

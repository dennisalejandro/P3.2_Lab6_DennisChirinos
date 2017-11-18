#pragma once
#include <iostream>
#include <string>
#include "Poder.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curacion.h"
#include "Mascota.h"

using namespace std;
class Mascota : public Poder {
	private: 
		string Nombre;
		string Especie;
		string Habilidad;
		string Train;
	public: 
		Mascota(string, string, string, string);
		void  setNombre(string);
		void  setEspecie(string);
		void  setHabilidad(string);
		void  setTrain(string);
		string getNombre();
		string getEspecie();
		string getHabilidad();
		string getTrain();
		string toString();
};

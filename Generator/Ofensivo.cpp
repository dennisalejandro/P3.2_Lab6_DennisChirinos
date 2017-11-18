#include "Ofensivo.h"
#include <iostream>
#include <string>
using namespace std;
	Ofensivo::Ofensivo(int Rango, int Fuerza) { 
		setRango(Rango);
		setFuerza(Fuerza);
	}
	void Ofensivo::setRango(int a) {
		this->Rango = a;
	}
	void Ofensivo::setFuerza(int a) {
		this->Fuerza = a;
	}
	int Ofensivo::getRango() {
		return this->Rango;
	}
	int Ofensivo::getFuerza() {
		return this->Fuerza;
	}

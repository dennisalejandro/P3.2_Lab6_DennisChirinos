#include "Curacion.h"
#include <iostream>
#include <string>
using namespace std;
	Curacion::Curacion(string Herida) { 
		setHerida(Herida);
	}
	void Curacion::setHerida(string a) {
		this->Herida = a;
	}
	string Curacion::getHerida() {
		return this->Herida;
	}

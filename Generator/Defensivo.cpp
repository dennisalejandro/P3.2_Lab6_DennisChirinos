#include "Defensivo.h"
#include <iostream>
#include <string>
using namespace std;
	Defensivo::Defensivo(int Resistencia, int Duracion) { 
		setResistencia(Resistencia);
		setDuracion(Duracion);
	}
	void Defensivo::setResistencia(int a) {
		this->Resistencia = a;
	}
	void Defensivo::setDuracion(int a) {
		this->Duracion = a;
	}
	int Defensivo::getResistencia() {
		return this->Resistencia;
	}
	int Defensivo::getDuracion() {
		return this->Duracion;
	}

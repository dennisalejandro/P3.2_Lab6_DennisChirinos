#include "NonBender.h"
#include <iostream>
#include <string>
using namespace std;
	NonBender::NonBender(int Trabajo, int Fuerza, int Velocidad) { 
		setTrabajo(Trabajo);
		setFuerza(Fuerza);
		setVelocidad(Velocidad);
	}
	void NonBender::setTrabajo(int a) {
		this->Trabajo = a;
	}
	void NonBender::setFuerza(int a) {
		this->Fuerza = a;
	}
	void NonBender::setVelocidad(int a) {
		this->Velocidad = a;
	}
	int NonBender::getTrabajo() {
		return this->Trabajo;
	}
	int NonBender::getFuerza() {
		return this->Fuerza;
	}
	int NonBender::getVelocidad() {
		return this->Velocidad;
	}

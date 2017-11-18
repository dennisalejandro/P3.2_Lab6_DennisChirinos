#include "NonBender.h"
#include <iostream>
#include <string>
#include "Poder.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curacion.h"
#include "Mascota.h"
using namespace std;
	NonBender::NonBender(int Trabajo, int Fuerza, int Velocidad, string Nacion, string Nombre, int Edad, string Sexo, Poder* P) : Persona(Nacion, Nombre, Edad, Sexo, P){ 
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
	string NonBender::toString() {
		string ret = "Nacion: " + getNacion() + " Nombre: " + getNombre() + " Edad: " + to_string(getEdad()) + " Sexo: " + getSexo() + " Num Trabajos: "+to_string(getTrabajo()) + " Fuerza: " + to_string(getFuerza()) + " Velocidad: "+ to_string(getVelocidad());
		return ret;
	}

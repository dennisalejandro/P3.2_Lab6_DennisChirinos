#include "Mascota.h"
#include <iostream>
#include <string>
using namespace std;
	Mascota::Mascota(string Nombre, string Especie, string Habilidad, Train string) { 
		setNombre(Nombre);
		setEspecie(Especie);
		setHabilidad(Habilidad);
		setstring(string);
	}
	void Mascota::setNombre(string a) {
		this->Nombre = a;
	}
	void Mascota::setEspecie(string a) {
		this->Especie = a;
	}
	void Mascota::setHabilidad(string a) {
		this->Habilidad = a;
	}
	void Mascota::setstring(Train a) {
		this->string = a;
	}
	string Mascota::getNombre() {
		return this->Nombre;
	}
	string Mascota::getEspecie() {
		return this->Especie;
	}
	string Mascota::getHabilidad() {
		return this->Habilidad;
	}
	Train Mascota::getstring() {
		return this->string;
	}

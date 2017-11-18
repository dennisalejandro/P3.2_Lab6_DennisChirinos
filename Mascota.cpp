#include "Mascota.h"
#include "Poder.h"
#include <iostream>
#include <string>
using namespace std;
	Mascota::Mascota(string Nombre, string Especie, string Habilidad, string Train) : Poder(4, "Mascota") { 
		setNombre(Nombre);
		setEspecie(Especie);
		setHabilidad(Habilidad);
		setTrain(Train);
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
	void Mascota::setTrain(string a) {
		this->Train = a;
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
	string Mascota::getTrain() {
		return this->Train;
	}
	string Mascota::toString() {
		string ret = " Poder:"+getTipo()+"("+getNombre()+","+getEspecie()+", "+getHabilidad()+","+getTrain()+")";
		return ret;
	}

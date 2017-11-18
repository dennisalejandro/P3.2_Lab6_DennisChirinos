#include "WaterBender.h"
#include <iostream>
#include <string>
#include "Poder.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curacion.h"
#include "Mascota.h"

using namespace std;
	WaterBender::WaterBender(string Tribu, string Arma, string Nacion, string Nombre, int Edad, string Sexo, Poder* P) : Persona(Nacion, Nombre, Edad, Sexo, P) { 
		setTribu(Tribu);
		setArma(Arma);
	}
	void WaterBender::setTribu(string a) {
		this->Tribu = a;
	}
	void WaterBender::setArma(string a) {
		this->Arma = a;
	}
	string WaterBender::getTribu() {
		return this->Tribu;
	}
	string WaterBender::getArma() {
		return this->Arma;
	}
	string WaterBender::toString() {
		string ret = "Nacion: " + getNacion() + " Nombre: " + getNombre() + " Edad: " + to_string(getEdad()) + " Sexo: " + getSexo()+ " Tribu:" + getTribu() + ", " + getPoder()->toString();
		return ret;
	}

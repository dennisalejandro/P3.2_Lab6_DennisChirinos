#include "FireBender.h"
#include <iostream>
#include <string>
#include "Poder.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curacion.h"
#include "Mascota.h"

using namespace std;
	FireBender::FireBender(int Cicatrices, int Victorias, string Nacion, string Nombre, int Edad, string Sexo, Poder* P) : Persona(Nacion, Nombre, Edad, Sexo, P) { 
		setCicatrices(Cicatrices);
		setVictorias(Victorias);
	}
	void FireBender::setCicatrices(int a) {
		this->Cicatrices = a;
	}
	void FireBender::setVictorias(int a) {
		this->Victorias = a;
	}
	int FireBender::getCicatrices() {
		return this->Cicatrices;
	}
	int FireBender::getVictorias() {
		return this->Victorias;
	}
	string FireBender::toString() {
		string ret = "Nacion: " + getNacion() + " Nombre: " + getNombre() + " Edad: " + to_string(getEdad()) + " Sexo: " + getSexo() + " Cicatrices: " + to_string(getCicatrices()) + " Victorias de Paisho: " + to_string(getVictorias())+", " + getPoder()->toString();
		return ret;
	}

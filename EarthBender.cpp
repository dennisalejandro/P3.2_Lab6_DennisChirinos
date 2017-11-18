#include "EarthBender.h"
#include <iostream>
#include <string>
#include "Poder.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curacion.h"
#include "Mascota.h"

using namespace std;
	EarthBender::EarthBender(int Coles, int Graduacion, string Nacion, string Nombre, int Edad, string Sexo, Poder* P) : Persona(Nacion, Nombre, Edad, Sexo, P) { 
		setColes(Coles);
		setGraduacion(Graduacion);
	}
	void EarthBender::setColes(int a) {
		this->Coles = a;
	}
	void EarthBender::setGraduacion(int a) {
		this->Graduacion = a;
	}
	int EarthBender::getColes() {
		return this->Coles;
	}
	int EarthBender::getGraduacion() {
		return this->Graduacion;
	}
	string EarthBender::toString() {
		string ret = "Nacion: " + getNacion() + " Nombre: " + getNombre() + " Edad: " + to_string(getEdad()) + " Sexo: " + getSexo() + " Coles Cosechadas: " + to_string(getColes()) + " Graduacion de ojos: " + to_string(getGraduacion())+ ","+ getPoder()->toString();
		return ret;
	}

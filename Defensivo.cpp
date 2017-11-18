#include "Defensivo.h"
#include "Poder.h"
#include <iostream>
#include <string>
using namespace std;
	Defensivo::Defensivo(int Resistencia, int Duracion) : Poder(2, "Defensivo") { 
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
	string Defensivo::toString() {
		string ret = " Poder:"+getTipo();+"("+to_string(getResistencia())+", "+to_string(getDuracion())+")";
		return ret;
	}
